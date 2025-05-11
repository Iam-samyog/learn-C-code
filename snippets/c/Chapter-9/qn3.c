//Write the program that takes 2 vector and provide sum of those vectors
#include<stdio.h>
typedef struct Vector{
    int x;
    int y;
}vec;

void VectorSum(vec v1, vec v2, vec sum);
int main(){
    vec v1={5,10};
    vec v2={3,7};
    vec sum={0};//null value

    VectorSum(v1,v2,sum);
    

    return 0;
}

void VectorSum(vec v1, vec v2, vec sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("The Sum of %di+%dj and %di+%dj is %di+%dj",v1.x,v1.y,v2.x,v2.y,sum.x,sum.y);
}
