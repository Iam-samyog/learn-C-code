//WAP to calculate area of circle

#include<stdio.h>
int main(){
    const float pi=3.14; 
    // for the const data type you can add const before the variable data type
    float radius;

    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    printf("The area of circle is %f",3.14*(radius*radius));
}