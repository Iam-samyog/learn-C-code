#include<stdio.h>
int main(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f \n",i);
    }

    for(char ch='a';ch<='z'; ch++){
        printf("%c\n",ch);
    }
    //Characters have ASCII value and C uses them
    return 0;
}