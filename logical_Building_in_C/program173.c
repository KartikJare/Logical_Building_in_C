#include<stdio.h>

void CountCapitalCountSmall(char *str)
{
    int iCountCap = 0,iCountSmall = 0;

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
        str++;
    }
    
    printf("Capital characters are : %d\n",iCountCap);
    printf("Small characters are :%d\n",iCountSmall);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalCountSmall(Arr);

    return 0;
}