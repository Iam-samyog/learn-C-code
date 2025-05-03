//Write a function to calculate area of square , a circle and a rectangle
#include<stdio.h>
#include<math.h>
#define Pi 3.14 //Makes the value constant

float areaSqr(float length);
float areaRect(float length,float width);
float areaCir(float radius);
int main(){
    float length, width, radius;
    printf("Enter the length:");
    scanf("%f",&length);
    printf("Enter the width:");
    scanf("%f",&width);
    printf("Enter the radius:");
    scanf("%f",&radius);

    printf("Area of Square is:%.2f\n",areaSqr(length));
    printf("Area of Rectangle is:%.2f\n",areaRect(length,width));
    printf("Area of Circle is:%.2f\n",areaCir(radius));

    return 0;
}
float areaSqr(float length){
    return pow(length,2);
}

float areaRect(float length,float width){
    return length*width;
}
float areaCir(float radius){
    return Pi*pow(radius,2);
}