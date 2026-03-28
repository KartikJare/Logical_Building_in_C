#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>//unviversal standard

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n",fd);
        close(fd);
    }

    return 0;
}