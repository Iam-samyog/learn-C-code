//Write a program to write all the even numbers from 1 to n in a file

#include<stdio.h>

void EvenNumber(int n,FILE *fptr);
int main(){
    FILE *fptr;
    int n;
    printf("Enter the Nth term for the Even numbers:");
    scanf("%d",&n);

   
    fptr=fopen("EvenNumbers.txt","w");
    EvenNumber(n,fptr);
    printf("Added Sucessfully");
   

    return 0;
}
void EvenNumber(int n,FILE *fptr){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            fprintf(fptr,"%d\n",i);
        }
    }
}