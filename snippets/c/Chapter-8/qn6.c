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
    int count=0;
    for(int i=0;i < strlen(str) ;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    return count;
}