#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iSize)
{

    int iCnt = 0;
    printf("Element of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

}
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

    // Step 2 : Use that memory
    Display(ptr,iLenght);
    //Use

    //Step 3: Free the memory
    free(ptr);

    return 0;
}
