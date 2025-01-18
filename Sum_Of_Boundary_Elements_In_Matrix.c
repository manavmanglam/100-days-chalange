54_ sum of boundary elements matrix 
#include <stdio.h>

void sumBoundary(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 || i == 2 || j == 0 || j == 2) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Sum of boundary elements: %d\n", sum);
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumBoundary(matrix);
    return 0;
}
