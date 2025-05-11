#include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[100];

};
int main(){
    //initialize struct
    
    struct student s1={1,3.85,"Samyog"};

    printf("%d\n",s1.id);
    printf("%.2f\n",s1.cgpa);
    printf("%s",s1.name);

    return 0;
}