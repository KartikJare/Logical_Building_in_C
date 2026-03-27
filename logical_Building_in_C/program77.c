// Input : 4
// Output : 1 2 3 4

/*
    start
        Accept the frequency
        Iterate from 1 to that frequency
            Display 1 2 3 4 on screen
        coutinue
    Stop
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Frequency: \n");
    scanf("%d",&iValue);

    Display(iValue);// jump to 15 


    return 0;
}

// Time Complextiy 0(N)
// N is a natural numer
// Where N>= 0 and N<= Infitiy