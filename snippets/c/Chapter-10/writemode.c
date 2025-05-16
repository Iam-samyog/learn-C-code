#include<stdio.h>
int main(){
    FILE *fptr;

    fptr=fopen("NewTest.txt","w"); //Creates a New File

    if(fptr == NULL){
        printf("File doesnot exits");
    }
    else{
        printf("File has been created");
        fclose(fptr);
    }
    return 0;
}