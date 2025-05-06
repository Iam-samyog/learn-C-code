//Write a program to print the largest number in an array

#include<stdio.h>
int main(){
    int arr[5]={1,14,27,10,5};//Array
    int largeNum=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largeNum){
            largeNum=arr[i];
        }
    }
    printf("The largest number in the array is %d",largeNum);

    return 0;
}