//Make a system that can store information of all students, teachers, and staff of your college in the form of structures
//Add functionalities like subject marks calculation of students
// Expected salary for the teacher and the staff

#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct global_students{
    int id;
    char name[100];
    float marks[6];
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

//Input Declaration
void inputStudentInfo(std arr[],int size);
void inputStaffInfo(std arr[],int size);
void inputTeacherInfo(std arr[],int size);

//Print declaration
void printStudentInfo(std arr[],int size);
void printStaffInfo(std arr[],int size);
void printTeacherInfo(std arr[],int size);




int main(){


    //Initialization
    std Student_Data[200];
    teach Teacher_Data[50];
    stf Staff_Data[30];
    int task;

    printf("Welcome to Global School of Science\n");
    printf("-----------------------------------\n");
    prinft("Enter the facilities that you want\n");
    printf("-----------------------------------\n");

    printf("1.Student Data Input.\n");
    printf("2.Teacher and Student Data Input.\n");
    printf("3.View Student Data .\n");
    printf("4.View Teacher and Student Data .\n");

    printf("-----------------------------------\n");
    printf("Enter the task number(1-4):")
    scanf("%d",&task);
    
    




  



    return 0;
}


//Student input function
void inputStudentInfo(std arr[],int size){
    for(int i=0;i < size,i++){

    }

}
























