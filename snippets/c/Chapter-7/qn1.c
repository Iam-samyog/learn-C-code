//Write a program to enter price of 4 items and print their final cost including VAT;
// VAT is 15% of the price. 


#include<stdio.h>
#include<conio.h>
int main(){
    float price[3];//another way of initializing array
    float sumVAT;

    for(int i=0;i<3;i++){
        printf("Etner the price of the items:");
        scanf("%f",&price[i]);
        sumVAT+=price[i];
    }
   
    printf("The total cost including VAT is: %.2f\n",sumVAT*1.15);
 

    return 0;
}