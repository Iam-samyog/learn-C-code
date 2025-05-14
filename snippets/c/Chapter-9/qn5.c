//Make a structure to store Bank Account Information of customer of Sanima bank, Also,make an alias for it.

#include<stdio.h>

typedef struct Bank_Account{
    char name[100];
    int id;
    float amount;

}acc;

int main(){
    acc a1;
    acc *ptr=&a1;

    //Taking inputs
    ptr->id=2;

    printf("Enter your name:");
    scanf("%s",&ptr->name);

    printf("Enter your amount:");
    scanf("%f",&ptr->amount);

    //Gives output
    printf("---------\n");
    printf("Your Id:%d\n",ptr->id);
    printf("Your Name:%s\n",ptr->name);
    printf("Your Amount:$%.2f\n",ptr->amount);


    return 0;
}