#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    int n;
    printf("Enter the memory size n:");

    scanf("%d",&n);

    ptr=(float*)calloc(n,sizeof(float));

   
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);

    ptr=(float*)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
         printf("%d\n",ptr[i]);
    }
    return 0;
}