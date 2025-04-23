#include<stdio.h>

int main(){
    int age=19;
    printf("Enter age :");
    scanf("%d",&age);

    if(age >=18){
        printf("You can vote.\n");

    }
    else{
        printf("You cannot vote.\n");
    }
    printf("Thank you");
    return 0;

}