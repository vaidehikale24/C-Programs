
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   21   3
//  Output          :   21   21  21
//  Description     :   Accept two numbers n1 and n2. Print n1 for n2 times.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
}
int main(){
    int iValue = 0;
    int iCount = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}
