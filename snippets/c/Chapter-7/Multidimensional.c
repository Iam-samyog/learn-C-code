#include<stdio.h>
int main(){
    int marks[2][3]; //2D array to store marks of 2 students in 3 subjects
    //input
   
    for(int i=0;i<2;i++){
        printf("Enter the marks of %d student in three subjects:\n",i+1);
        for(int j=0;j<3;j++){
           printf("Enter the %d marks :",j+1);
           scanf("%d",&marks[i][j]);
           

        }
    }
    printf("\n\n");
    //output
    for(int i=0;i<2;i++){
        printf("The  marks obtained by %d student in three subjects:",i+1);
        for(int j=0;j<3;j++){
            printf("The %d subject marks is:%d\n",j+1,marks[i][j]);
          


        }
    }

    return 0;
}