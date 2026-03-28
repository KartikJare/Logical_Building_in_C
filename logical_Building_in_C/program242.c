#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[10] = {'\0'};

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

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            //printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',10);  //new
        }
        
        close(fd);
    }

    return 0;
}