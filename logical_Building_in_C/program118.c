#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;
    
    printf("Enter the elements : \n");

    for(iCnt = 0;iCnt < 5;iCnt++) // N
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Element from the array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)// N
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
//total program time N(2)