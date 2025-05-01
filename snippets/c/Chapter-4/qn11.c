//Write a program to check if a number is prime or not.
#include<stdio.h>
#include<math.h>
int main(){
    int num,isPrime=0;
    printf("Enter any number :");
    scanf("%d",&num);

    if(num==0 || num == 1){
        printf("%d is not a prime number.\n",num);
    }
    else{
        for(int i=2; i< sqrt(num) ;i++){
            if(num % i ==0){
             
                isPrime=1;
                break;
            }
        }
        if(isPrime){
            printf("%d is not a prime number.\n", num);
        }
        else{
            printf("%d is  a prime number.\n", num);
        }
    }
    return 0;
}
