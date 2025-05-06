//In an array of numbers, find how many times does a number 'x' occurs

#include<stdio.h>
int main(){
    int num[10]={1,2,4,4,2,6,2,2,9,9};
    int x;
    printf("Enter the number you want to find in the Array:");
    scanf("%d",&x);
    int count=0;

    for(int i=0;i<10;i++){
        if(num[i]==x){
            count++;
        }
    }
    printf("The number %d occurs %d in the array.",x,count);

    return 0;
}