#include <stdio.h>

int main (void)
{
    int num1;
    int num2;

    printf("Enter any number\n");
    printf("and I will show you the result:");

    scanf("%d%d", &num1, &num2);

    if ( num1 == num2 ) {
        printf("%d is equal to %d\n", num1, num2 );
    }

    if ( num1 != num2 ) {
        printf("%d is not equal to %d\n", num1, num2 );
    }

    if ( num1 > num2 ) {
        printf("%d is greater than %d\n", num1, num2 );
    }

    if ( num1 < num2 ) {
        printf("%d is less than %d\n", num1, num2 );
    }

    if ( num1 >= num2 ) {
        printf("%d is greater than or equal to %d\n", num1, num2 );
    }

    if ( num1 <= num2 ) {
        printf("%d is less than or equal to %d\n", num1, num2 );
    }

    return 0;
}

