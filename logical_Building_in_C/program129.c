#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{                                                           
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0 )
        {
            iCount++;
        }
    }
    return iCount;
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
    iRet = CountOdd(ptr,iLenght);
    //Use

    printf("Number of odd element are  : %d\n",iRet);
    
    //Step 3: Free the memory
    free(ptr);

    return 0;
}
