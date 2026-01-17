#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal = decimal / 2;
    }

    // Print binary number in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Validate input
    if (decimal < 0) {
        printf("Invalid input. Please enter a non-negative integer.");
        return 1;
    }

    decimalToBinary(decimal);

    return 0;
}
