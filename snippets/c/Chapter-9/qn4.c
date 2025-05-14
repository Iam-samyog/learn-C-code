//Create a structure to store complex number use arrow operator

#include<stdio.h>
struct complex{
    int r;
    int i;
};
void storeComplex(struct complex c1);
int main(){
    struct complex c1;

    printf("Enter your real part of the number :");
    scanf("%d",&c1.r);

    printf("Enter your img part of the number :");
    scanf("%d",&c1.i);
    storeComplex(c1);


}
void storeComplex(struct complex c1){
    struct complex *ptr=&c1;//pointer
    printf("The complex number you have stored is %d+%di",ptr->r,ptr->i);
}