
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactDiff
//  Description     :   Accept number from user and return difference sum of all its factors and non factors
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactDiff(int iNo)
{
    int iSumF = 0;
    int iSumNF = 0;
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumF = iSumF+iCnt;
        }
        else
        {
            iSumNF = iSumNF+iCnt;
        }
    }
    return iSumF-iSumNF;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}
