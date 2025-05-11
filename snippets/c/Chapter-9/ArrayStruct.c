#include<stdio.h>
struct student {
    int id;
    float marks;
    char name[100];

};
int main(){
    struct student cs[100];
    cs[0].id=1;
    cs[1].id=2;

    cs[0].marks=3.79;
    cs[1].marks=3.87;

    printf("Enter the name of first student:");
    fgets(cs[0].name,100,stdin);

    printf("Enter the name of second student:");
    fgets(cs[1].name,100,stdin);


    printf("Student name is %s\n",cs[0].name);
    
    printf("Student id is %d\n",cs[0].id);
    printf("Student gpa  is %.2f\n",cs[0].marks);

    printf("Student name is %s\n",cs[1].name);
    
    printf("Student id is %d\n",cs[1].id);
    printf("Student gpa  is %.2f\n",cs[1].marks);





    return 0;
}