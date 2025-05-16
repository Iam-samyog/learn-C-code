#include<stdio.h>
//fgetcputc

int main(){

    FILE *fptr;
    fptr=fopen("NewTest.txt","r");

    printf("%c\n",fgetc(fptr));
     fclose(fptr);

    fptr=fopen("NewTest.txt","w");

    fputc('M',fptr);
    fclose(fptr);


   
    return 0;
}