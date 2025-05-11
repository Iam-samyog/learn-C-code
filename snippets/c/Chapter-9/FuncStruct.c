//Use of Function with structure 

// Structure is user defined value

#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1={2,3.45,"Samyog"};

    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("Student Info!");
    printf("Name of student: %s\n",s1.name);
    printf("Roll no of student:%d\n",s1.roll);
    printf("Marks of student :%.2f\n",s1.cgpa);
}