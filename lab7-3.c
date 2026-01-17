#include <stdio.h>

void add(); 

void add() { 
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int main() {
    add(); 
    return 0;
}
