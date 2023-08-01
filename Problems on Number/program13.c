
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   NonFact
//  Description     :   Accept number from user and display all its non factors 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
///////////////////////////////////////////////////////////////////////////////


void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}
