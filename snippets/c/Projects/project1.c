//Make a system that can store information of all students, teachers, and staff of your college in the form of structures
//Add functionalities like subject marks calculation of students
// Expected salary for the teacher and the staff

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
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
void inputStudentInfo(std s1);
void inputStaffInfo(stf st1);
void inputTeacherInfo(teach t1);

//Print declaration
void printStudentInfo();
void printStaffInfo();
void printTeacherInfo();




int main(){


    //Initialization
    std Student_Data;
    teach Teacher_Data;
    stf Staff_Data;
    int task;
    FILE *fptr;



    printf("Welcome to Global School of Science\n");
    printf("-----------------------------------\n");
    printf("Enter the facilities that you want\n");
    printf("-----------------------------------\n");

    printf("1.Student Data Input.\n");//done
    printf("2.Teacher and Staff Data Input.\n");
    printf("3.View Student Data .\n");
    printf("4.View Teacher and Staff Data .\n");

    printf("-----------------------------------\n");
    printf("Enter the task number(1-4):");
    scanf("%d",&task);
    

    if(task == 1){
        inputStudentInfo(Student_Data);
        
    } else if(task==2){
            char ch;
            printf("-----------------------------------\n");
            printf("Enter 't' for teacher input and 's for staff input:");
            scanf(" %c",&ch);
            if(ch == 't'){
                 inputTeacherInfo(Teacher_Data);
            }
            else if(ch=='s'){
                inputStaffInfo(Staff_Data);
               
            }
            else{
                printf("Invalid integer!!\n");
            }
            printf("-----------------------------------\n");
        
    }else if(task==3){
        printf("-----------------------------------\n");
         printStudentInfo();
          printf("-----------------------------------\n");
    }else{
        printf("Invalid Input .Choose number between (1-4).");
    }
    

    return 0;
}


//Student input function
void inputStudentInfo(std s1){
    FILE *fptr;

    char subject[6][20]={"Physics","Math","Science","English","Nepali","Computer Science "};
    printf("----Input Student Data----\n");
    printf("Enter the name:");
    scanf("%s",&s1.name);
    printf("Enter your id:");
    scanf("%d",&s1.id);
    printf("--Enter your marks--\n");
    for(int i=0;i<6;i++){
        printf("%s:", subject[i]);
        scanf("%f",&s1.marks[i]);
    
    }
    float total=0.0;
    for(int i=0;i<6;i++){
        total+=s1.marks[i];
    }
    s1.cgpa=((total/6.00)/100)*4.0;
    
    fptr=fopen("Student.txt","r");
    if(fptr == NULL){
        fptr=fopen("Student.txt","w");
        fprintf(fptr, "ID      Name      CGPA");
        fprintf(fptr,"\n");
    }
    else{
        fptr=fopen("Student.txt","a");
    }
    
    fprintf(fptr, "%-6d %-10s\t%.2f\n", s1.id, s1.name, s1.cgpa);  
    fclose(fptr);

    printf("Added Sucessfully!!\n");
    
}

void inputStaffInfo(stf st1){
    FILE *fptr;

   
    printf("----Input Staff Data----\n");
    printf("Enter the name:");
    scanf("%s",&st1.name);
    printf("Enter your id:");
    scanf("%d",&st1.id);
    printf("Enter your salary:");
    scanf("%f",&st1.salary);

    fptr=fopen("Staff.txt","r");
    if(fptr == NULL){
        fptr=fopen("Staff.txt","w");
        fprintf(fptr, "ID      Name      Salary");
        fprintf(fptr,"\n");
    }
    else{
        fptr=fopen("Staff.txt","a");
    }
    
    fprintf(fptr, "%-6d %-10s\t%.2f\n", st1.id, st1.name, st1.salary);  
    fclose(fptr);

    printf("Added Sucessfully!!\n");

}

void inputTeacherInfo(teach t1){
      FILE *fptr;

   
    printf("----Input Teacher Data----\n");
    printf("Enter the name:");
    scanf("%s",&t1.name);
    printf("Enter your id:");
    scanf("%d",&t1.id);
    printf("Enter your salary:");
    scanf("%f",&t1.salary);

    fptr=fopen("Teachers.txt","r");
    if(fptr == NULL){
        fptr=fopen("Teachers.txt","w");
        fprintf(fptr, "ID      Name      Salary");
        fprintf(fptr,"\n");
    }
    else{
        fptr=fopen("Teachers.txt","a");
    }
    
    fprintf(fptr, "%-6d %-10s\t%.2f\n", t1.id, t1.name, t1.salary);  
    fclose(fptr);

    printf("Added Sucessfully!!\n");

}


//printing 
void printStudentInfo(){
        FILE *fptr=fopen("Student.txt","r");
        if(fptr == NULL){
            printf("Couldn't open the File\n");
            return 1;
        }

        int search_id;
        printf("------Search Student------\n");
        printf("Enter the id:");
        scanf("%d",&search_id);

        char name[20];
        int id;
        float cgpa;

        char buffer[100];
        fgets(buffer, sizeof(buffer), fptr);
        int found;

        while(fscanf(fptr,"%d %s %f",&id,&name,&cgpa)==3){
            if(id == search_id){
                printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nSalary: %.2f\n", id, name, cgpa);
            found = 1;
             break;
            }
        }

         if (!found) {
        printf("No record found with ID %d\n", search_id);
        }

        fclose(fptr);


        
        





}






void printStaffInfo(){
    
}
void printTeacherInfo();
























