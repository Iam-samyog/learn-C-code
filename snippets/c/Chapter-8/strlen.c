#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
   
    printf("Enter your Name:");
    fgets(name,100,stdin);


    printf("The length of your Name is %d",strlen(name)-1);

    return 0;
}