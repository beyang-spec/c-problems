#include <stdio.h>
#define TWO 2

void main()
{
    int length, width, area, perimeter;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = TWO * (length + width);

    printf("\nArea of the %d by %d rectangle is %d square units\n", length, width, area);
    printf("and the Perimeter is %d units\n", perimeter);
}