//print the value of V=100 using pointer to pointer

#include<stdio.h>
int main(){
    int i=100;
    int *ptr=&i;
    int **pptr=&ptr;

   
    printf("%d.\n",**pptr);

    return 0;
}