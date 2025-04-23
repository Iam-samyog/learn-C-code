#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    printf("Your grade is :\t");
    marks < 30 ? printf("C"): (marks < 70 ? printf("B"):( marks < 90 ? printf("A") : printf("A+") ));
    return 0;
}