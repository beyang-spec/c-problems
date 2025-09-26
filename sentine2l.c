#include <stdio.h>

int main() {
    int counter = 0;
    int grade;
    int total = 0;
    float average;

    printf("Enter grade #%d (-1 to end): ", counter + 1);
    scanf("%d", &grade);

    while (grade != -1) {
        if (grade >= 0 && grade <= 100) {
            total += grade;
            counter++;
        } else {
            printf("Invalid grade. Please enter a value between 0 and 100.\n");
        }

        printf("Enter grade #%d (-1 to end): ", counter + 1);
        scanf("%d", &grade);
    }

    if (counter != 0) {
        average = (float) total / counter;
        printf("Class average is %.2f\n", average);
    } else {
        printf("No grades were entered.\n");
    }

    return 0;
}