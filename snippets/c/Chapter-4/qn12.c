// Write a program to print prime numbers in a range.

#include<stdio.h>
#include<math.h>
int main(){
    int first_num,second_num, isPrime=0;
    printf("Checking Prime numbers in a rang\n");

    //Taking input of the range
    printf("Enter the lower range : ");
    scanf("%d",&first_num);
    printf("Enter the upper range : ");
    scanf("%d",&second_num);

    //Loop for the prime numbers
    for(int i=first_num; i <=second_num;i++){
        if(i<=1){
            printf("%d is not a prime number.\n",i);
        }
        else{
            for(int j=2; j<=sqrt(i);j++){
                if(i % j ==0){
                 
                    isPrime=1;
                    break;
                }
            }
            if(isPrime){
                printf("%d is not a prime number.\n", i);
            }
            else{
                printf("%d is  a prime number.\n", i);
            }
        }

        isPrime=0; //Resets the code
    }

    return 0;
}