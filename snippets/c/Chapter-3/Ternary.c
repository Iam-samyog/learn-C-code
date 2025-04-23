#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
 
    marks >= 30 ? printf("Pass\n"): printf("Fail\n");

    //Condition ? executes if condition is satisfied : executes if condition is doesn't satisfied
    return 0;
}              