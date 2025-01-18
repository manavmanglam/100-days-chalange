72_call by value
#include <stdio.h>

void increment(int num) {
    num = num + 1;
    printf("Value inside function: %d\n", num);
}

int main() {
    int n = 5;
    increment(n);
    printf("Value after function call: %d\n", n);
    return 0;
}
