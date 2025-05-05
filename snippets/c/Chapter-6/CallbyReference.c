#include<stdio.h>

void _square(int *n);//Pointer

int main(){
    int number=4;
    _square(&number); // Variable address

    printf("number= %d\n",number);

    return 0;
}
//Call by Reference
void _square(int *n){
    *n=(*n)*(*n);
    printf("Square =%d\n",*n);
}