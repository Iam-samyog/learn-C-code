#include <stdio.h>
#include <string.h>

typedef struct HousingData {
    int houseNo;
    char block;
    char city[100];
    char state[100];
} house;

void inputHouse(house h1[5]);
void printHouse(house h1[5]);

int main() {
    house h1[5];
    inputHouse(h1);
    printHouse(h1);
    return 0;
}

void inputHouse(house h1[5]) {
    for(int i = 0; i < 5; i++) {
        printf("House No %d\n", i + 1);
        printf("-------------\n");

        printf("Enter your house no: ");
        scanf("%d", &h1[i].houseNo);
     

        printf("Enter your block (A,B,C,D): ");
        scanf(" %c", &h1[i].block); // space before %c is important

        printf("Enter your city: ");
        scanf("%s", h1[i].city);

        printf("Enter your state: ");
        scanf("%s", h1[i].state);

        printf("-------------\n");
    }
}

void printHouse(house h1[5]) {
    for(int i = 0; i < 5; i++) {
        printf("House Detail %d\n", i + 1);
        printf("-------------\n");

        printf("House no is %d\n", h1[i].houseNo);
        printf("Block is %c\n", h1[i].block);
        printf("City is %s\n", h1[i].city);
        printf("State is %s\n", h1[i].state);
        printf("-------------\n");
    }
}
