//Find the salted form of a password entered by user if the salt is "123" and added at end.
#include<stdio.h>
#include<string.h>

void salting(char password[]);
int main(){
    char password[100];
    char salt[10]="123";

    printf("Enter your password:");
    scanf("%s",password);

    salting(password);

    return 0;
}
void salting(char password[]){
    char newpassword[200];
    char salt[]="123";

    strcpy(newpassword,password);
    strcat(newpassword,salt);

    printf("%s",newpassword);
}
