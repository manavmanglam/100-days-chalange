
#include <stdio.h>

void sumDiagonal(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumDiagonal(matrix);
    return 0;
}
