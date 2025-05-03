//Sum of first n natural number
#include<stdio.h>

int sumN(int n);

int main(){
    
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);

    printf("Sum of nth term is %d.",sumN(n));

    return 0;
}

int sumN(int n){
    if(n==0){
        return 0;
    }
    
    return n+sumN(n-1);
}