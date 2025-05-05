#include<stdio.h>

int main(){

    //* value at that address
    // & address of variable
    int age=19;
    int *ptr=&age;

    //address
    printf("%p\n",&age);
    
    //pointer
    printf("%p\n",ptr);

    printf("%p\n",&ptr);

    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    


    return 0;
}