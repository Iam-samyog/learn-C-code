//
#include<stdio.h>
#include<string.h>
typedef struct ComputerScienceDepartment{
    int roll;
    float cgpa;
    char name[100];
}cs;
int main(){

    cs s1={27,3.94,"Samyog"};
    // this is equivalent to struct ComputerScienceDepartment s1;

    printf("Name of student:%s\n",s1.name);
    printf("Rollno of student:%d\n",s1.roll);
    printf("Marks of student:%.2f\n",s1.cgpa);

    return 0;
}