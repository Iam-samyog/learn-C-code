#include<stdio.h>
int main(){
    int i=1;

    printf("%d\n",i++);//use, then increase
    printf("%d\n",i);


    printf("%d\n",++i);// increase,then use
    printf("%d\n",i);

    //same thing can be done using pre-decrement;

    return 0;
}