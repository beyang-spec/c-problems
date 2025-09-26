#include <stdio.h>

int main() {

    int w, v, lastdigit_W, lastdigit_V;

    printf("Enter two integers:");
    scanf("%d\n%d", &w, &v);

    lastdigit_W = w % 10;
    lastdigit_V = v % 10;

    if (lastdigit_W == lastdigit_V) {
        printf("\nYes the last digit is same. ", lastdigit_W, lastdigit_V);
    }
    else {
        printf("No the last digit entered is different.", lastdigit_V, lastdigit_W);
    }

    return 0;
}