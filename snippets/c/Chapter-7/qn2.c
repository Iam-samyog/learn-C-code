//Write a function to count the number of even numbers in an array
#include <stdio.h>
int EvenNumber(int arr[],int size);

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    printf("The total number of even numbers in the array is: %d\n",EvenNumber(arr,10));
    return 0;
}
int EvenNumber(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
        
    }
    return count;
}