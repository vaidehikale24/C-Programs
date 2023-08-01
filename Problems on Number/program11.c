
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultFact
//  Description     :   Accept number from user and display its multiplication of factors
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
//////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iResult = 1;
    int iCnt = 0;

    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iResult = iResult*iCnt;
        }
       
    }
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factors is : %d ",iRet);

    return 0;
}
