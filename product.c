#include <stdio.h>

int main(void)
{
    int x, y, z, result;

    printf("Enter x:");
    scanf("%d", &x);

    printf("Enter y:");
    scanf("%d", &y);

    printf("Enter z:");
    scanf("%d", &z);

    result = x* y *z;

    printf("The product is %d\n", result);

return 0;
}