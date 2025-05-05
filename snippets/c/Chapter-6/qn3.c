//Write a functuon to calculate the sum, product and average of 2 numbers. Print that average in the main function
//Note we are returning 3 values from one function

#include<stdio.h>

void doWork(int a,int b,int *sum,int *product ,float *avg);
int main(){
    int a=3,b=5;
    int sum,product;
    float avg;
    doWork(a,b,&sum,&product,&avg);
    
    printf("sum=%d,product=%d,avg=%f",sum,product,avg);
    
    return 0;


}
void doWork(int a,int b ,int *sum,int *product ,float *avg){
     *sum=a+b;
     *product=a*b;
     *avg=*sum/2;
}
