#include <stdio.h>

int main() {

    int i, s = 0;
    int n;
    i = 1;

    printf(" Enter a natural number:");
    scanf("%d", &n);


    while (i <= n) {

        s += i;
        i++;
    }
    printf("\nSum = %d", s);
    return 0;
}