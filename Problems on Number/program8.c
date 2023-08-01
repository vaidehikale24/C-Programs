
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Display "Hello" if accepted number from user is less than 10 otherwise "Demo"
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{ 
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
