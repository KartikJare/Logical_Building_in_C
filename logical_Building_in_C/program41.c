#include<stdio.h>
#include<stdbool.h>

bool CheckPrefect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iSum = iCnt + iSum;
    }   }

    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
return iSum;

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrefect(iValue);

    if (iRet == true)
    {
        printf("%d  is prefect number\n",iValue);
    }
    else 
    {
        printf("%d is not prefect number\n",iValue);
    }

    return 0;

}