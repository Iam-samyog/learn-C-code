#include<stdio.h>


int main(){
    char first_name[100];
    char last_name[100];
    printf("Enter your first Name:");
    scanf("%s",&first_name);
    printf("Enter your second Name:");
    scanf("%s",&last_name);

    printf("Your Full Name is %s %s",first_name,last_name);
    return 0;

}