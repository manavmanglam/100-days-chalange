
#include <stdio.h>

void convertToWords(int num) {
    char* ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char* tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char* thousands[] = {"", "Thousand"};

    if (num == 0) {
        printf("Zero\n");
        return;
    }
    if (num / 1000 > 0) {
        printf("%s Thousand ", ones[num / 1000]);
        num %= 1000;
    }
    if (num / 100 > 0) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }
    if (num > 0) {
        if (num < 20) {
            printf("%s", ones[num]);
        } else {
            printf("%s", tens[num / 10]);
            if (num % 10 > 0) {
                printf(" %s", ones[num % 10]);
            }
        }
    }
    printf(" Rs only\n");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    convertToWords(number);

    return 0;
}
