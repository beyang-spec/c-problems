#include <stdio.h>

int main() {
    int grade = 85; // Hardcoded for testing.

    if (grade >= 90 && grade <= 100) {
        printf("A");
    } else if (grade >= 80 && grade <= 89) {
        printf("B");
    } else if (grade >= 70 && grade <= 79) {
        printf("C");
    } else {
        printf("D");
    }

    return 0;
}

