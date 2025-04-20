//Write a program to calculate area of square by taking the user input

#include<stdio.h>
 
int main(){
    float side;
    printf("Enter the side of the square:");
    scanf("%f",&side);

    printf("Area of square is %.2f",side*side);
    return 0;

}