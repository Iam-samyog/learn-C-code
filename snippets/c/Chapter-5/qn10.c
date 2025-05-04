#include <stdio.h>

// Manually defined power function using logarithms and exponentials
float power(float base, float exponent);
float sqroot(float n);

int main() {
    float number;
    printf("Enter any number: ");
    scanf("%f", &number);

    if (number < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        printf("The square root of %.2f is %.2f.\n", number, sqroot(number));
    }

    return 0;
}

float power(float base, float exponent) {
    float result = 1.0;
    int integerPart = (int)exponent;

    // Handle positive integer powers
    for (int i = 0; i < integerPart; i++) {
        result *= base;
    }

    // For square root (exponent = 0.5), use approximation (optional)
    if (exponent == 0.5) {
        float guess = base / 2;
        for (int i = 0; i < 10; i++) {
            guess = (guess + base / guess) / 2;
        }
        return guess;
    }

    return result;
}

float sqroot(float n) {
    return power(n, 0.5);
}
