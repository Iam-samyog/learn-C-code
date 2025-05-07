//Make a program that inputs user's name and prints its lenght

#include<stdio.h>

int lengthString(char name[]);
int main(){
    char name[100];
    printf("Enter your Name:");
    fgets(name,100,stdin);

    printf("The length of string is %d",lengthString(name));


    return 0;
}
int lengthString(char name[]){
    int count=0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count-1;

    
}