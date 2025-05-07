#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    char _newname[100];
    printf("Enter your Name:");
    fgets(name,100,stdin);

    strcpy(_newname,name);
    puts(_newname);

    return 0;
}