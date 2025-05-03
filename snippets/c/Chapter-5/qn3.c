#include<stdio.h>

void printTable(int n);

int main(){
    int num;
    printf("Enter the number of which you want the table of:");
    scanf("%d",&num);

    printTable(num);//actual parameter/argument
    return 0;
}

void printTable(int n){   //parameter/formal parameter
    for(int i=1; i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}