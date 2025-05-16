//Reading from the file

#include<stdio.h>

int main(){
    FILE *fptr;

    fptr=fopen("Test.txt","r");

    char ch[100];
    fscanf(fptr,"%s",&ch);
    //File, format specifier, ampersand


    printf("%s",ch);

    fclose(fptr);

    return 0;
}