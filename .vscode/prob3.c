#include <stdio.h>

int main() {

    int num;
    
    printf("Enter two digit  number:");
    scanf("%d", &num);

    if ((num % 3) || (num % 7)) {
        printf("\n Divisible by 3 or 7", num);
    }
    else {
    printf("\nNot divisible by 3 or 7");
    }

    return 0;
}