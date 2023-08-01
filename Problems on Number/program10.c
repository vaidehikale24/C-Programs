
#include<stdio.h>

/////////////////////////////////////////////////
//
//  Function Name   :   ChkEven
//  Description     :   Check if the accepted number is Even or Odd
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }
}
