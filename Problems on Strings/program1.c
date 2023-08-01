
#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name   :   main
//  Description     :   Accept name from user and print that name 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name \n");
    scanf("%[^\n]%*c",&Name);

    printf("Your name is %s",Name);
    return 0;
}
