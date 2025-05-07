#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    char ch;
    int i=0;
    printf("Enter a string (press Enter to finish):\n");
    while(ch != '\n'){
        scanf("%c",&ch);
        str[i]=ch;
        i++;

    }
    str[i] = '\0';
    puts(str);
   
    
    return 0;
}