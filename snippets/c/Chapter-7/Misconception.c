// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num[3]={1,2,3};
    int *ptr=num;
    // The first array acts as pointer
    
    //Many people confuses by saying that Array is a pointer but it only acts on the first term of the array that is arr[0]
    
    printf("%d",*ptr);

    return 0;
}