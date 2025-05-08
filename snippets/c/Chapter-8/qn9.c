//Write a program to print the highest frequency character in a string
#include<stdio.h>
#include<string.h>

char HighFreq(char str[]);
int main(){
    char str[100];

    printf("Enter any string");
    fgets(str,100,stdin);

HighFreq(str);
    

    returns 0;
}
char HighFreq(char str[]){
    int count[256]={ 0 };
    int length=strlen(str);
    for(int i=0;i<length;i++){
        count[(int)str[i]++];
    }
    char maxChar;
    int maxCount=0;

    for(int i=0;i<length;i++){
        if(count[(int)str[i]] >maxCount){
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }
    return maxChar;
}