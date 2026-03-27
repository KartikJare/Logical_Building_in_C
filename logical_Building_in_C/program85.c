// Input : 4 #
// Output : # # # # 

// Input : 5 &
// Output : & & & & & 

// Input : 3 z
// Output : z z z

#include<stdio.h>

void Display(int iNo ,char ch)
{
    int iCnt = 0;
    
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++) // N
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter Frequency: \n");
    scanf("%d",&iValue);

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    printf("Accepted character is : %c\n",cValue);
    Display(iValue,cValue);// jump to 15 


    return 0;
}

// Time Complextiy 0(N)
// N is a natural numer
// Where N>= 0 and N<= Inifitiy