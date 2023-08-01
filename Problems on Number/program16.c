#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkGreater
//  Description     :   Accept one number from user and check whether that 
//                      number is greater than 100 or not.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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

    printf("Please enter number \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    
    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}