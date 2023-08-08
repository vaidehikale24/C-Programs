
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Accept number from user and print that number of $ & *
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("$ *\t");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}