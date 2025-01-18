67_check palindrom
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            if (tolower(str[start]) != tolower(str[end])) {
                return 0;
            }
            start++;
            end--;
        }
    }
    return 1;
}

int main() {
    char name[100];

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    if (isPalindrome(name)) {
        printf("The name is a palindrome.\n");
    } else {
        printf("The name is not a palindrome.\n");
    }

    return 0;
}
