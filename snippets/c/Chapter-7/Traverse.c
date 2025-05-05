#include<stdio.h>
int main(){
    int number[5];
    //input
    int *ptr=&number[0];
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));
    }
    //output
    printf("The numbers are:\n");

    for(int i=0;i<5;i++){
        printf("%d index:%d\n",i,*(ptr+i));
    }
    return 0;
}