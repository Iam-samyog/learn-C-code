//WAP to check it a given number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main(){
    int num,remainder,result=0,digits=0,originalNum;
    printf("Enter the number :");
    scanf("%d",&num);

   
    originalNum=num;
    int temp=num;
    while(temp!=0){
        temp/=10;
        digits++;
    }

    temp=num;
    while(temp!=0){
        remainder=temp%10;
        result+=pow(remainder,digits);
        /*
        int power=1;
        for(int i=1; i < = digits ; i++){
            power*=remainder
        }
            result +=power;
        */
        // reason that pow() doesn't work always is beacause it is used by double data type which something might lead to problem when use int 
        temp/=10;
    }

    if(result==originalNum){
        printf("The %d is a armstrong number.\n",originalNum);
    }
    else{
        printf("The %d is not an armstrong number.",originalNum);

    }


    return 0;
}