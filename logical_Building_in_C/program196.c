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

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    for(iCnt = iCount;iCnt > 0;iCnt--,str--)
    {
        printf("%c",*str);
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