#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLenght = 0,iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of element : \n");
    scanf("%d",&iLenght);

    //Step 1 : Allocate then memory
    ptr = (int *)malloc(iLenght * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the element : \n");
    for(iCnt = 0;iCnt < iLenght ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element are : \n");
    for(iCnt = 0;iCnt < iLenght ;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    // Step 2 : Use that memory
    //Use

    //Step 3: Free the memory
    free(ptr);

    return 0;
}
