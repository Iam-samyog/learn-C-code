//Write  a program to store the data of 3 patients

#include<stdio.h>
#include<string.h>
struct patients{
    char name[100];
    int id;
    char diease[100];
};
int main(){
    
    struct  patients p1;
    strcpy(p1.name,"Samyog");
    strcpy(p1.diease,"Fever");
    p1.id=1320;

    printf("Patient 1\n");
    printf("Name of patient=%s\n",p1.name);
    printf("Name of diease=%s \n",p1.diease);
    printf("Id of patient=%d\n",p1.id);

    
    printf("Patient 2\n");
    struct  patients p2;
    strcpy(p2.name,"Samyog");
    strcpy(p2.diease,"Fever");
    p2.id=1320;

    printf("Name of patient=%s\n",p2.name);
    printf("Name of diease=%s \n",p2.diease);
    printf("Id of patient=%d\n",p2.id);



    printf("Patient 3\n");
    struct  patients p3;
    strcpy(p3.name,"Samyog");
    strcpy(p3.diease,"Fever");
    p3.id=1320;

    printf("Name of patient=%s\n",p3.name);
    printf("Name of diease=%s \n",p3.diease);
    printf("Id of patient=%d\n",p3.id);

    return 0;
}