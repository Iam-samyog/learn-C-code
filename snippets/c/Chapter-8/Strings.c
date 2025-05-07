#include<stdio.h>

int main(){
    char first_name[]={'S','a','m','y','o','g','\0'};
    char last_name[]="Maharjan";
    char full_name[]="Samyog Maharjan";

    for(int i=0;first_name[i] != '\0'; i++){
       
        printf("%c",first_name[i]);
    }
    printf(" ");
    for(int i=0;last_name[i] != '\0';i++){
        
        printf("%c",last_name[i]);
    }
    printf(" ");
    printf("%s",full_name);
    


    return 0;

}