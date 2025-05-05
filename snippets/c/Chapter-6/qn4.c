//WAP to find the highest number between two numbers using a pointer
//Call by Reference 
#include<stdio.h>
void highNumber(int num1,int num2,int *answer);
int main(){
    int a=8,b=10;
    int answer;

    highNumber(a,b,&answer);
    printf("%d is the greatest among %d and %d.\n",answer,a,b);

    return 0;
}
void highNumber(int num1,int num2,int *answer){
    if (num1 > num2 ){
        *answer=num1;
        
    }
    else if(num1 == num2){
        printf("Both Numbers are equal. ");
    }else{
        *answer=num2;
        
    }

}