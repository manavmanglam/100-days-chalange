
#include <stdio.h>

void sumDifference(int arr[], int size) {
    int positiveSum = 0, negativeSum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveSum += arr[i];
        } else if (arr[i] < 0) {
            negativeSum += arr[i];
        }
    }
    printf("Difference between sum of positive and negative numbers: %d\n", positiveSum - negativeSum);
}

int main() {
    int arr[] = {1, -2, 3, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumDifference(arr, size);
    return 0;
}
