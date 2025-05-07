#include<stdio.h>
#include<string.h>
int main(){
    char *ptrString="IamSamyog";
    puts(ptrString);//String as a pointer can be reinitilized
    
    ptrString="Samyog";
    puts(ptrString);
    return 0;
}