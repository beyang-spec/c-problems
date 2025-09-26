#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("\n%d minutes is equal to %d hours and %d minutes.\n", minutes, hours, remaining_minutes);

    return 0;
}