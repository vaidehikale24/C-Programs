#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Description     :   Accept total marks and obtained marks from user and calculate percentage 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////////////

float Percentage(int tmarks,int omarks)
{
    float fResult;
    float t = (float)tmarks;
    float o = (float)omarks;

    fResult = (o/t)*100;

    return fResult;

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage : %f %%",fRet);
    
    return 0;
}