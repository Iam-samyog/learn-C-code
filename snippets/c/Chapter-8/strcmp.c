#include<stdio.h>
#include<string.h>
int main(){
    char *firstStr="Apple";
    char *secondStr="Banana";

    printf("%d",strcmp(firstStr,secondStr));

    //0->Equal string
    //1-> First string is greater than second String
    //-1->First string is less than second string
    //Compares the ASCII value
}