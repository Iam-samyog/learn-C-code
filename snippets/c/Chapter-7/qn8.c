#include <stdio.h>

void arrayInsert(int arr[], int *n, int addNum);

int main() {
    int number[100] = {1, 2, 3, 4, 5};  // Increased size to allow insertions
    int size = 5;
    int num;
    char ch = 'y';

    while (ch == 'y') {
        printf("Enter the number you want to add in the array: ");
        scanf("%d", &num);
        
        arrayInsert(number, &size, num);  // pass size as pointer

        printf("Current Array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", number[i]);
        }
        printf("\n");

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &ch);  // notice the space before %c to consume newline
    }

    return 0;
}

void arrayInsert(int arr[], int *n, int addNum) {
    arr[*n] = addNum;
    (*n)++;
}
