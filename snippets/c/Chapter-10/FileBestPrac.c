#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("NewTest.txt","r");
    if(fptr == NULL){
        printf("File doesn't exist\n");

    }else{
        fclose(fptr);
    }

    return 0;
}