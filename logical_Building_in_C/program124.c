#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLenght = 0;
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
    // Step 2 : Use that memory
    //Use

    //Step 3: Free the memory
    free(ptr);

    return 0;
}
