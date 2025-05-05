#include<stdio.h>
int main(){
    int age=22;
    int _age=24;
    int *ptr=&age;
    int *_ptr=&_age;

    printf("%u %u subtract=%u\n",ptr,_ptr,ptr-_ptr);//%u= gives decimal value
    printf("COmpare=%u\n",ptr==_ptr);//%u= gives decimal value
    return 0;
}