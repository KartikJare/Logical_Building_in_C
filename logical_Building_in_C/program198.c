//////////////////////////////////////////////////////////
//
//  File Name  :
//  Decription :
//  Author     :
//  Date       :
//     
//////////////////////////////////////////////////////////

#include<stdio.h>

void ReserseDisplay(char *str)
{
    int iCount = 0,iCnt = 0;
    char *strat = NULL;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    
    str--;
    
    while(*str >= strat)
    {
        printf("%c",*str);
        str--;  
    }
    printf("\n");

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    ReserseDisplay(Arr);

    return 0;
}