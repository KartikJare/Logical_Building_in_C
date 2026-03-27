#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{                                                           
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iLenght = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of element : \n");
    scanf("%d",&iLenght);

    //Step 1 : Allocate then memory
    ptr = (int *)malloc(iLenght*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the element : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step 2 : Use that memory
    iRet = Summation(ptr,iLenght);
    //Use

    printf("Summation is : %d\n",iRet);
    
    //Step 3: Free the memory
    free(ptr);

    return 0;
}
