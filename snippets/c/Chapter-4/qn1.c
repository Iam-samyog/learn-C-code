//Print the Numbers from 0 to N , if n is given by user
#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter the N terms:");
    scanf("%d",&n);

    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}
