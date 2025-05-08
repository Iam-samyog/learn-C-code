//Check if a given character is present in a string or not
#include<stdio.h>
#include<string.h>

void checkChar(char str[],char ch);

int main(){
    char str[100];
    char ch;


    printf("Enter any word:");
    fgets(str,100,stdin);

    printf("Enter the character to check in the word:");
    scanf("%c",&ch);

    checkChar(str,ch);

    return 0;
}
void checkChar(char str[],char ch){
    
    int check=0;
    for(int i=0;i < strlen(str) ;i++){
        if(str[i]==ch){
            check++;
        } 

    }
    if(check > 0){
            printf("Yes");
    }
    else{
        printf("No");
    }
       
}