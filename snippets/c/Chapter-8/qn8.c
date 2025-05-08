//Write a program to convert lowercase vowels to uppercase in a string


#include<stdio.h>
#include<string.h>

void upperVowel(char str[]);

int main(){
    char str[100];

    printf("Enter any word:");
    fgets(str,100,stdin);

    upperVowel(str);

    return 0;
}
void upperVowel(char str[]){
    char vowels[10]="aeiou";
    
    char count[100];
    for(int i=0;i < strlen(str) ;i++){
        for(int j=0;j<10;j++){
            if(str[i]==vowels[j] ){
                str[i]-=32;
            }

        } 
    }
    printf("Modified string: %s", str);
  
   
}