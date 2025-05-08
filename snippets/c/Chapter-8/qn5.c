// Write a function named slice, which takes a string and returens a sliced string from index n to m
#include<stdio.h>

void slice(char str[],int n , int m);

int main(){
    char str[100];
    int n,m;

    printf("Enter your string:");
    fgets(str,100,stdin);

    printf("Enter the first index:");
    scanf("%d",&n);

    printf("Enter the second index:");
    scanf("%d",&m);

    slice(str,n,m);

    return 0;
}
void slice(char str[],int n , int m){
    if(n == 0){
        for(int i=0;i<m;i++){
            printf("%c",str[i]);
        }
        printf("\n");

    }
    else{
        for(int i=n-1;i<m;i++){
            printf("%c",str[i]);
        }
        printf("\n");
    }
 
}