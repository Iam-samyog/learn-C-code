//Write a program to remove all the blank spaces in a string using C
#include<stdio.h>
#include <string.h>

void removeSpaces(char str[]);

int main(){
    char str[100]="Hello World";


    removeSpaces(str);
    
    return 0;
}

void removeSpaces(char str[]){
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }

        i++;
    }
    str[j]='\0';
    printf("Modified string is %s",str);
}