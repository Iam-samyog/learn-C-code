//Write a function to calculuate Percentage of a studetn from Marks in Science,Math and English

#include<stdio.h>

float Percentage(float sci,float math, float eng);// function Decalaration;

int main(){
    float sci,math,eng;
    printf("Enter the Marks of Science:");
    scanf("%f",&sci);
    printf("Enter the Marks of Math:");
    scanf("%f",&math);
    printf("Enter the Marks of English:");
    scanf("%f",&eng);

    printf("You Percentage is %f",Percentage(sci,math,eng));


    return 0;
}

float Percentage(float sci,float math, float eng){
    float total=300.00;
    float Percentage=(sci+math+eng)/total;
    return Percentage*100;
}