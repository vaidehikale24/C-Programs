
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Description     :   Accept number from user and find its factorial 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);
    
    return 0;
}