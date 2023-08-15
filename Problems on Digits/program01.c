
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Description     :   Accept number from user and display its digits in 
//                      reverse order
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
