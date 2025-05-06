//Create a 2D array , to store tables of 7 and 8

#include<stdio.h>


int main(){
    int tables[2][10];
    int product=1;

    for(int i=0;i<2;i++){
        int num=7+i;
        for(int j=0;j<=10;j++){
            
                product=num*(j+1);
                tables[i][j]=product;
            
        }
    }
    //output
    for(int i=0;i<2;i++){
        
        for(int j=0;j<10;j++){
            printf("%d ",tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}