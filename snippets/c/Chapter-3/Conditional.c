#include<stdio.h>

int main(){
    int age=19;
    printf("Enter age :");
    scanf("%d",&age);

    if(age >=18){
        printf("You are an adult.\n");

    }
    else if(age>13 && age <18){
        printf("You are teenager \n");

    }
    else{
        printf("You are a child.\n");
    }
    printf("Thank you");
    return 0;

}