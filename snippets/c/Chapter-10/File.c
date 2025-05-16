#include<stdio.h>


int main(){

    //Opening file
    FILE *fptr;

    fptr=fopen("Test.txt","r");

    
 

    //closing a file
    fclose(fptr);


    return 0;
}