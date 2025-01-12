
#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Fibonacci series up to %d terms: \n", n);
        fibonacci(n, 0, 1);
    }

    return 0;
}
