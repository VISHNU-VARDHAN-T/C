#include<stdio.h>

int max_of_three(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    
    printf("Maximum of %d, %d, and %d is %d\n", a, b, c, max_of_three(a, b, c));
    
    return 0;
}
