//WAP to allocate memory to store  5 prices

#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr;
    //malloc(5*sizeof(float));void type
    ptr=(float*)malloc(5*sizeof(float));

    printf("Enter the Prices:");
    for(int i=0;i<5;i++){
        scanf("%f",&ptr[i]);
    }
    printf("Prices:\n");
    for(int i=0;i<5;i++){
        printf("%d:%f\n",i,ptr[i]);
    }

    return 0;
}