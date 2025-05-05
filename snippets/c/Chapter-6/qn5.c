// Write me C program code that will pint all the letter of the english alphabet using pointers?

#include<stdio.h>
int main(){
    char alphabet='A';

    char *ptr=&alphabet;

    for(int i=0;i<26;i++){
        printf("%c ",*ptr);
        (*ptr)++;

    }
    return 0;
}