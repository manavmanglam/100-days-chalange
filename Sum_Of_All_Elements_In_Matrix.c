
#include <stdio.h>

void sumMatrix(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix: %d\n", sum);
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumMatrix(matrix);
    return 0;
}
