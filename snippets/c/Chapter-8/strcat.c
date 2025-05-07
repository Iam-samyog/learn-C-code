#include<stdio.h>
#include<string.h>
int main(){
    char firstString[100]="Samyog";//Modifiable memory
    //First String size should always be bigger than the second string .
    //almost bigger than the sum of two strings for the firstString
    char *secondString="Maharjan";
   strcat(firstString,secondString);
    printf("Concatenated string is %s",firstString);


    return 0;
}