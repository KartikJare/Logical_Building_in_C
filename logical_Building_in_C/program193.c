//////////////////////////////////////////////////////////
//
//  File Name  :
//  Decription :
//  Author     :
//  Date       :
//     
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str, char ch)
{

    while(*str != '\0')
    {
        if((*str == ch))
        {
            break;
        }

        if(*str == '\0')
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = CheckCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is not present in %s\n",cValue,Arr);
    }

    return 0;
}