#include<stdio.h>
#include<string.h>
//user defined data type
 struct student{
        char name[100];
        int roll;
        float cgpa;
};
int main(){
   
    struct student s1;
    s1.cgpa=8.5;
    // s1.name="Samyog";This will be wrong
    strcpy(s1.name,"Samyog");
    // This will be right 
    s1.roll=7694;

    printf("%.2f\n",s1.cgpa);
    puts(s1.name);
    printf("%d\n",s1.roll);
    return 0;
}