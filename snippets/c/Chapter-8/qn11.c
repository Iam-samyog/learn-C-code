//Write a program to replace lowercase letter with uppercase and vice versa in string

#include<stdio.h>
#include<string.h>


int main(){

    char str[100]="SamyogMaharjan";
    char finalstr[100];

    
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            finalstr[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            finalstr[i]=str[i]+32;
        }
    }
    finalstr[strlen(str)] = '\0';
    
    printf("Final string is %s",finalstr);
    return 0;
}