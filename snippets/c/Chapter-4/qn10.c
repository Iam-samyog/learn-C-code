/*
print this pattern using nested loop.
*****
*****
*****
*****
*/ 
#include<stdio.h>
int main(){
    char ch='*';
    for(int i=0;i<4;i++){
        for(int j=0; j<5;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}