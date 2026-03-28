//////////////////////////////////////////////////////////
//
//  File Name  :
//  Decription :
//  Author     :
//  Date       :
//     
//////////////////////////////////////////////////////////

//Case insensitive

// Input : deRm2dfr
// Char: R

//Output :2 (Correct)

// Input : Demo@23@re
// char :@

//OutPut : 2(Correct)

#include<stdio.h>

int CharFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((ch >= 'A') && (ch <='Z'))     //nested if Captial 
        {
            if((*str == ch) || (*str == ch + 32))
            {
                iCount++;
            }
        }
        else if((ch >= 'a') && (ch <='z'))   // samll
        {
            if((*str == ch) || (*str == ch - 32))
            {
                iCount++;
            }
        }
        else
        { 
            if(*str == ch) // Other (special Symbol / digits)
            {
                iCount++;
            }
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CharFrequency(Arr,cValue);

    printf("%c occurs %d time\n",cValue,iRet);

    return 0;
}