53
#include <stdio.h>

void sumNonDiagonal(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Sum of non-diagonal elements: %d\n", sum);
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumNonDiagonal(matrix);
    return 0;
}
