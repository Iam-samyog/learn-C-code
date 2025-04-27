//Keep taking numbers as input from user until user enters a number which is multiple of 13

#include<stdio.h>
int main()
{
    int n,i=1;
    while(i){
        printf("Enter the number:");
        scanf("%d",&n);
        if(n % 13==0){
            break;
        }
    }
    printf("Opps! You have entered the multiple of 13. that is %d",n);

    return 0;
}
