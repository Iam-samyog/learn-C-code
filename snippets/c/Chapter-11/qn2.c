#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Step 1: Allocate memory to store the first 5 even numbers
    arr = (int *)calloc(5 , sizeof(int));
   

    // Step 2: Store the first 5 even numbers (0, 2, 4, 6, 8)
    for (i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    // Step 3: Reallocate memory to store 8 even numbers
    arr = (int *)realloc(arr, 8);
    

    // Step 4: Store the next 3 even numbers (10, 12, 14)
    for (i = 5; i < 8; i++) {
        arr[i] = i * 2;
    }

    // Step 5: Print all 8 even numbers
    printf("First 8 even numbers:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}
