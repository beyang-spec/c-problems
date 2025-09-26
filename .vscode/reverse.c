#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;

        reversed = units * 100 + tens * 10 + hundreds;

        printf("Reversed number: %d\n", reversed);
    } else {
        printf("Please enter a valid 3-digit number.\n");
    }

    return 0;
}
