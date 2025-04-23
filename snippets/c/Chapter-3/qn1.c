//WAP to check if a student pased or fail. 
// marks >30 pass / marks <=30 Fail
//Use if else

#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks <=30 && marks >=0 ){
        printf("You have been failed.");
    }
    else if(marks > 30 &&  marks <=100 ){
        printf("You are passed!! ");
    }
    else{
        printf("Invalid inputted  marks .");

    }


    return 0;
}