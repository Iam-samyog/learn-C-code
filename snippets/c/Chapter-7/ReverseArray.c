#include<stdio.h>

void arrayReverse(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};

    arrayReverse(arr,5);
   
    
    return 0;
}
void arrayReverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstValue=arr[i];
        int secondValue=arr[n-i-1];
        arr[i]=secondValue;
        arr[n-i-1]=firstValue;

    }
    printf("The reversed array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}