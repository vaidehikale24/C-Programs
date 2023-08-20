
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastOcc
//  Description     :   Accept N numbers from user and accept one another number No, return index pf   
//                      last occurance of that NO
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iPos = -1;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt ;
            break;
        }
    }
    return iPos;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0,iValue = 0, iRet = 0;

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

    iRet = LastOcc(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such number %d", iValue);
    }
    else
    {
        printf("Last Occurance of %d is: %d", iValue,iRet);
    }

    free(ptr);

    return 0;
}