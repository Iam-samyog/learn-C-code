#include<stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    if(number >=0){
        printf("Positive number \n");
        if (number %2 ==0){
            printf("The number is even");
        }
        else{
            printf("The number is odd");
        
        }
    }
    else if (number == 0){
        printf("The number is zero");

    }
    else{
        printf("Negative number\n");
        number % 2 ==0 ? printf("The number is even") :  printf("The number is odd") ;
    }

   
    return 0;
}