//Allocate memory for 5 numbers and incrase upto 10 numbers
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));

    printf("Enter 5 numbers:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter number 8:");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }

    printf("-------\n");
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
    

    return 0;
}