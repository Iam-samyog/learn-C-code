//Write a function that prints Namaste if user is Nepali and Hi for other user

#include<stdio.h>

void printNepali();
void printOthers();

int main(){
    int userOrigin;
    printf("Enter 1 if the user is Nepal or else press any digit:");
    scanf("%d",&userOrigin);

    if(userOrigin==1){
        printNepali();
    }
    else if(userOrigin<0){
        printf("Error!");

    }
    else{
        printOthers();
    }
    return 0;
}
void printOthers(){
    printf("Hi.\n");
}
void printNepali(){
    printf("Namaste.\n");
}
