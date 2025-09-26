#include <stdio.h>
#define SIXTY 60

void main()
{
    int minutes, hours, remaining_minutes;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    if (minutes < 0) {
        printf("\nInvalid input. Minutes must be non-negative.\n");
        return;
    }

    hours = minutes / SIXTY;
    remaining_minutes = minutes % SIXTY;

    printf("\n%d minutes is equal to %d hours and %d minutes.\n", minutes, hours, remaining_minutes);
}