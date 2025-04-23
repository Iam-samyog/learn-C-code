#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);

    if (ch >='A' && ch <= 'Z' ){
        printf("UpperCase");
    }
    else if(ch >='a' && ch <= 'z'){
        printf("LowerCase");
        
    }
    else{
        printf("Not english letter");
    }

    return 0;

}