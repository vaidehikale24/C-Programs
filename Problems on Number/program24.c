
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay
//  Description     :   Accept number from user and print first 5 multiples of N
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////


void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        printf("%d ",iNo*iCnt);  
    }

}
int main()
{
    int iValue=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}