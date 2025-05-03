#include<stdio.h>

int sum(int a , int b);

int main(){
    int num1, num2;
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);
    
    printf("Your sum is %d",sum(num1,num2));

    return 0;
}
int sum(int a, int b){
    return a+b;
}