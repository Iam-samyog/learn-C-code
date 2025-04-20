#include<stdio.h>
//Code displays how data types work in the C
/*Comment is really usfull because it helps programmer to give information of the program to other programmers.*/


int main(){
    // char name='Samyog';

    int age;
    float salary;
    char rating;

   printf("Enter your age:");
   scanf("%d", &age);

   printf("Enter your salary:");
   scanf("%f", &salary);

   printf("Enter your rating");
   scanf(" %c", &rating); // Important to keep space

   printf("You age is %d\t",age);
   printf("You salary is %f \t",salary);
   printf("You rating is %c \n",rating);



    return 0;
}
