//Keep taking numbers as input from user until user enters an odd number

#include<stdio.h>
int main(){
    int n,i=1;
    
    while(i){
        printf("Enter an even number:");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }
    printf("You have entered the odd number.");
    return 0;
}