//Make a system that can store information of all students, teachers, and staff of your college in the form of structures
//Same question will be soon be used to make a project
#include<stdio.h>

typedef struct global_students{
    int id;
    char name[100];
    float cgpa;
}std;

typedef struct global_teachers{
    int id;
    char name[100];
    float salary;
}teach;

typedef struct global_staff{
    int id;
    char name[100];
    float salary;
}stf;

int main(){

    std s1={1,"Samyog",4.00};
    teach t1={109,"Leonard",56000};
    stf st1={202,"John",40000};

    printf("-----Student-----\n");
    printf("Name:%s\n",s1.name);
    printf("Id:%d\n",s1.id);
    printf("Cgpa:%.2f\n",s1.cgpa);
    


    printf("-----Teacher-----\n");
    printf("Name:%s\n",t1.name);
    printf("Id:%d\n",t1.id);
    printf("Salary:%.2f\n",t1.salary);

    printf("-----John-----\n");
    printf("Name:%s\n",st1.name);
    printf("Id:%d\n",st1.id);
    printf("Salary:%.2f\n",st1.salary);




    return 0;
}