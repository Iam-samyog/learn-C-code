//WAP to check if a number is divisible by 2 or not

#include<stdio.h>
int main(){
    int num;
    int ans;
    printf("Enter a number to check if it is divisible by 2 or not:");
    scanf("%d",&num);
    ans=num % 2;
    printf("If the output is 1 then it is divisible or else not: %d\n",ans==0);
    return 0;

    //this program can also be worked to check where they are even or odd.
}
