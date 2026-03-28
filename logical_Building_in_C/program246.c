#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024  //mrico

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE))!= 0)
        {
            for(iCnt = 0;iCnt < iRet;iCnt++)
            {
                printf("%c\n",Buffer[iCnt]);
            }

            memset(Buffer,'\0',BUFFER_SIZE);  //new
        }
        
        close(fd);
    }

    return 0;
}

// modern operting system Athut godbole
// oerting system by te