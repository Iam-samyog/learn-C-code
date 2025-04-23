#include <stdio.h>
int main(){
    //Relational operators
    int a=3, b=2;
    printf("Relational Operator\n");
    printf("%d\n",a<=b);    //0
    printf("%d\n",a>=b);    //1
    printf("%d\n",a>b);     //1
    printf("%d\n",a<b);     //0
    printf("%d\n",a==b);    //0
    printf("%d\n",a!=b);    //1

    //Logical Operator
    printf("Logical Operator\n");
    //And &&
    printf("%d\n", 4>3 && 5>2); //1
    printf("%d\n", 4>3 && 5<2); //0
    //Or ||
    printf("%d\n",4>3 || 5>2);//1
    printf("%d\n",4>3 || 5<2);//1
    printf("%d\n",4<3 || 5<2);//1
    //Not !
    printf("%d\n",!(4>3)); //0
    printf("%d\n",!(4<3)); //1

    //Assignment Operator
    printf("Assignment Operator\n");
    int c=5;
    
    printf("%d\n",c+=5);    //10
    printf("%d\n",c-=5);    //5
    printf("%d\n",c*=5);    //25
    printf("%d\n",c/=5);    //5
    printf("%d\n",c%=5);    //0
    //Here, value of c is getting changed 
    //so after first print, c value is 10 


    return 0;
    
}