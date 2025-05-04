//Write a function to print n terms of the fibonacci sequence

#include<stdio.h>

int fib(int n); 

int main(){
    int n;
    printf("Enter the nth terms:");
    scanf("%d",&n);

    printf("%d\n",fib(n));

    return 0;
}
int fib(int n){
  
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    
    int fibN=fib(n-1)+fib(n-2);
    // printf("Fibnonacci of %d is %d\n",n,fibN);
    return fibN;

}
   


