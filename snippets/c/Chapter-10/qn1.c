//Make a program to read 5 integers from a file 

#include<stdio.h>
int main(){
    FILE *fptr;

    fptr=fopen("Integers.txt","r");
    int integers;
    integers=fgetc(fptr);

    while(integers != EOF){
        printf("%c",integers);
        integers=fgetc(fptr);
        
    }
    fclose(fptr);

    return 0;
}