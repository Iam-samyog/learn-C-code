#include<stdio.h>
int main(){
    int age=22;
    char _age='A';
    int *ptr=&age;
    char *_ptr=&_age;

    // this code will be wrong because we are trying to subtract two different data types

    printf("%u %u subtract=%u\n",ptr,_ptr,ptr-_ptr);
    printf("%u %u subtract=%u\n",ptr,_ptr,ptr ==_ptr);
    return 0;
}