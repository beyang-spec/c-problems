#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(unsigned int n) {

    if (n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter an integer:");
    scanf("%d", &num);

    printf("\nFactorial of %d is %d", num, factorial(num));

    return 0;
}
