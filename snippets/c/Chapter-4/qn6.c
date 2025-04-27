//Print all numbers from 1 to 100 except for mutiple of 5 to 8
#include<stdio.h>
int main(){
   
    for (int i=1;i<=100;i++){
        if(i % 5 ==0 || i% 6 ==0 || i% 7 ==0 || i% 8 ==0  ){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}