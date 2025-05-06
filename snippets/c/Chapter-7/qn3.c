//Write a function to reverse an array

#include<stdio.h>

void arrayReverse(int arr[],int size);
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("The original array is:\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe reversed array is:\n");
    arrayReverse(arr,10);
   
    return 0;
}
void arrayReverse(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
   
}