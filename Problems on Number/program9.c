/////////////////////////////////////////////////
//
//  Input   21    3
//  Output  21   21  21
//
/////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo,int iFrequency){
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++){
        printf("%d ",iNo);
    }
}
int main(){
    int iValue=0;
    int iCount=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}
