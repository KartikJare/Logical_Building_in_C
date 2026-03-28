#include<stdio.h>

void CountCapitalCountSmallDigit(char *str)
{
    int iCountCap = 0,iCountSmall = 0,iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
        str++;
    }
    
    printf("Capital characters are : %d\n",iCountCap);
    printf("Small characters are :%d\n",iCountSmall);
    printf("Digit  are :%d\n",iCountDigit);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalCountSmallDigit(Arr);

    return 0;
}