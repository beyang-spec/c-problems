#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;
    int temp;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extract digits
    d1 = num / 1000;             // 1st digit
    d2 = (num / 100) % 10;       // 2nd digit
    d3 = (num / 10) % 10;        // 3rd digit
    d4 = num % 10;               // 4th digit

    // Use temp to swap positions
    // Step 1: Swap d1 and d3
    temp = d1;
    d1 = d3;
    d3 = temp;

    // Step 2: Swap d2 and d4
    temp = d2;
    d2 = d4;
    d4 = temp;

    // Reconstruct the number
    int newNum = d4 * 1000 + d2 * 100 + d1 * 10 + d3;

    printf("Rearranged number: %d\n", newNum);

    return 0;
}