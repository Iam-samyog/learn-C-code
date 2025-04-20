//Operator:+,-,*,/,%

//Note:Single variable should be used on the left hand side to store value on the varibable

//int x,y=a/b; Here only y will be initialze rather than the x

#include<stdio.h>
#include<math.h>

int main(){

    int oldAge=22;
    int years=2;
    int newAge=oldAge+years;
    printf("%d\n",newAge);

    int power=pow(5,3);
    printf("%d\n",power);

    printf("%d",28%20); // % is Modular Operator that gives Remainder

   
}