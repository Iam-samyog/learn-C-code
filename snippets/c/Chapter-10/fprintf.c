#include<stdio.h>
int main(){
    FILE *fptr;

    fptr=fopen("NewTest.txt","w");

    char name[10]="Samyog";

    fprintf(fptr,"%s",name);
    fclose(fptr);

}