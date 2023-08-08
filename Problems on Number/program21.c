
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Accept number from user and print all numbers till that number 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1 ;iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }

}
int main()
{
    int iValue=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}