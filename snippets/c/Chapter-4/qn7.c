//Print the Factorial of a Number N
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number N:");
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>0;i--){
        fact*=i;

    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}