/////////////////////////////////////////////////
//
//  Display "*" for 5 times
//
/////////////////////////////////////////////////
#include<stdio.h>

void Accept(int iNo){
    int iCnt=0;

    for(iCnt=1;iCnt<=5;iCnt++){
        printf("*");
    }
}

int main(){
    int iValue=0;
    iValue=5;

    Accept(iValue);
    return 0;
}
