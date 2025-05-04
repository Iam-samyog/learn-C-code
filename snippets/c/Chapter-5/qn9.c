////Write a function to print nth terms of the fibonacci sequence

#include<stdio.h>

void fib(int n); 

int main(){
    int n;
    printf("Enter the nth terms:");
    scanf("%d",&n);

    fib(n);

    return 0;
}
void fib(int n){
    int current=0;
    int prev=1;
    int temp,i=0;
    while(i<n){
        printf("%d\n",current);
        temp=current+prev;
        current=prev;
        prev=temp;
        i++;
        

    }
}
   


