
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Display "*" for n times using for loop. Accept n from user 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
