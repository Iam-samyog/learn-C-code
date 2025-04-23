//Print 1(true) or 0(false) for following statements:

#include<stdio.h>
int main(){
    //a)if it's sunday & it's snowing
    printf("question 1.\n");
    int sunday,snowing;
    printf("Enter 1 if it's sunday or else 0:");
    scanf("%d",&sunday);
    printf("Enter 1 if it's snowing or else 0:");
    scanf("%d",&snowing);
    printf("%d\n",sunday && snowing);

    //b.If it's wednesday & its sunny;
    printf("question 2.\n");
    int mon,sunny;
    printf("Enter 1 if it's monday or else 0:");
    scanf("%d",&mon);
    printf("Enter 1 if it's sunny or else 0:");
    scanf("%d",&sunny);
    printf("%d\n",mon && sunny);

    //c. if a number is greater than 8 & less than 45
    printf("question 3.\n");
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d",num>8 && num <45);

    return 0;

}