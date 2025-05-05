//Swap 2 numbers, a&b using Call by Reference

#include<stdio.h>

void swap(int *a,int *b);
int main(){
    int x=5, y=6;
    

    swap(&x,&y);

    printf("%d\n",x);
    printf("%d\n",y);

    
    return 0;

}

//call by value

void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
    printf("a=%d and b=%d\n",*a,*b);
}