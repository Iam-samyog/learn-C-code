#include<stdio.h>
struct patient{
    char name[100];
    int id;
    char diease[100];
};
int main(){
    struct patient p1={"Samyog",1,"Fever"};
    struct patient *ptr=&p1;
    ;

    printf("%d\n",(*ptr).id);
    printf("%s\n",(*ptr).name);
    printf("%s\n",(*ptr).diease);

    //use of Arrow operator
    printf("%p\n",ptr);
    printf("%u\n",ptr->id);
    printf("%u\n",ptr->name);
    printf("%d\n",ptr->id);
    printf("%s\n",ptr->name);

 
    return 0;
}