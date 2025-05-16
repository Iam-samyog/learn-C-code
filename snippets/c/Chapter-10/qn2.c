//Make a program to input student information from a user and enter it to a file

#include<stdio.h>
typedef struct student{
    char name[100];
    int age;
}std;

int main(){
    FILE *fptr;
    std s1;
    printf("Enter your Name:");
    scanf("%s",&s1.name);
    printf("Enter your age:");
    scanf("%d",&s1.age);
    
    
    fptr=fopen("Student.txt","r");

    if(fptr == NULL){
        fptr=fopen("Student.txt","w");
        fprintf(fptr,"%s",s1.name);
        printf("\t");
        fprintf(fptr,"%d",s1.age);
        printf("Successfully added.");
        

    }else{
        fptr=fopen("Student.txt","a");
        printf("\n");
        fprintf(fptr,"%s %d\n",s1.name,s1.age);
        printf("Successfully added.");
    }
    

    fclose(fptr);
   
    

    return 0;
}