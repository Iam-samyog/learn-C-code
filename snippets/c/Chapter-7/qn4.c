//Write a program to sotre the first n fibonacci numbers
#include<stdio.h>

void Fibonacci(int arr[],int n); 

int main(){
    int size;
    printf("Enter the Nth term for Fibonacci Series:");
    scanf("%d",&size);
    int arr[size];
    Fibonacci(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void Fibonacci(int arr[],int n){
    int curr=0,prev=1,temp;
    for(int i=2;i<n;i++){
        arr[i]=curr;
        temp=curr+prev;
        curr=prev;
        prev=temp;
        
    }


}