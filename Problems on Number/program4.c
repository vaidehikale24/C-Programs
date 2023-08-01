
#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Accept and Check if number is divisible by 5
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{

    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}
