#include<stdio.h>
int main(){
    int day;
    printf("Enter the number of the day (1-7):");
    scanf("%d",&day);
    //ONLY CHARACTER AND NUMBER CAN BE PLACED IN SWITCH
    switch(day){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thrusday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Please input number between 1 to 7");
        
    }
    return 0;
}