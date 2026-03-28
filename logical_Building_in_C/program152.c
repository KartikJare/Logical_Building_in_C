#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);//%s for string  regular expe 

    printf("Your name is : %s\n",Arr);

    return 0;
}