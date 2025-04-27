//Print the Sum of First n Natural Number
//also print them  in reverse

#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);

    int sum=0;
    for(int i=0,j=n; i<=n && j>=0;i++,j--){
        sum+=i;
        printf("%d\n",j);

    }
    printf("The sum of %dth natural number is %d\n",n,sum);
    
    return 0;
}
