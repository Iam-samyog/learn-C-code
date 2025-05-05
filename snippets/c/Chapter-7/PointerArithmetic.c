#include <stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("ptr=%u\n",ptr); //%u= gives decimal value
    ptr++;// value increases by the size of the data type
    printf("ptr=%u\n",ptr);
    ptr--;
    printf("ptr=%u\n",ptr);
   
    return 0;
}