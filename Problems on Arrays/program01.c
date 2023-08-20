#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Accept N numbers from user and return difference between summation of even 
//                      elements and summation of odd elements.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
    int SumE = 0;
    int SumO = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            SumE = SumE + Arr[iCnt];
        }
        else
        {
            SumO = SumO + Arr[iCnt];
        }
    }
    return SumE - SumO;
}

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int * )malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated ---> ");
    }
    else
    {
        printf("Enter the elements : \n");
        for(int iCnt = 0;iCnt < iSize;iCnt++)
        {
            scanf("%d",&ptr[iCnt]);
        }
    }

    iRet = Difference(ptr,iSize);

    printf("Difference between even and odd : %d",iRet);
    free(ptr);
    return 0;
}
