
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Accept N numbers from user and accept one another number 
//                      No, check whether No  is present or not.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    BOOL iCnt = 0;
    BOOL iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0,iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet= Check(ptr, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("%d is present\n", iValue);
    }
    else
    {
        printf("%d is not present", iValue);
    }

    free(ptr);

    return 0;
}