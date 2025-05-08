//Write a function to count the occurrence of vowels in a string
#include<stdio.h>
#include<string.h>

int vowelsCount(char str[]);

int main(){
    char str[100];

    printf("Enter any word:");
    fgets(str,100,stdin);

    printf("The number of vowel in the %s is %d",str,vowelsCount(str));

    return 0;
}
int vowelsCount(char str[]){
    char vowels[10]="aeiouAEIOU";
    int count=0;
    for(int i=0;i < strlen(str) ;i++){
        for(int j=0;j<10;j++){
            if(str[i]==vowels[j]){
                count++;
            }

        }
       
    }
    return count;
}