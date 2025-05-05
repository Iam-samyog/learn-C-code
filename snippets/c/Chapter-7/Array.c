#include<stdio.h>
int main(){
    int marks[3];
    
    printf("Enter physics marks:");
    scanf("%d",&marks[0]);

    printf("Enter chemistry marks:");
    scanf("%d",&marks[1]);
    
    printf("Enter maths marks:");
    scanf("%d",&marks[2]);
    
    printf("Physics marks=%d\n",marks[0]);
    printf("Chemistry marks=%d\n",marks[1]);
    printf("Maths marks=%d\n",marks[2]);
    return 0;
}
