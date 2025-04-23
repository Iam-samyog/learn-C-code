//Write a program to print the smallest number of two.

#include<stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a, &b);

    int ans=(a+b-abs(a-b))/2;
    printf("The smallest number of two is :%d\n",ans);
    
    return 0;
}