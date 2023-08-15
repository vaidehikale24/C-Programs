
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountLessSix
//  Description     :   Accept number from user and count frequency of 4 in it
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

int CountLessSix(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountLessSix(iValue);

    printf("Count of digits which are less than 6: %d", iRet);
    
    return 0;
}