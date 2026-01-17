#include <stdio.h>

// Function to calculate factorial
long factorial(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        long result = factorial(num);
        printf("Factorial of %d = %ld\n", num, result);
    }

    return 0;
}

