#include <stdio.h>
#define ZERO 0

void main()
{
    float basic_salary, hours_overtime, rate_per_hour, total_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter overtime hours: ");
    scanf("%f", &hours_overtime);

    printf("Enter overtime rate per hour: ");
    scanf("%f", &rate_per_hour);

    if (basic_salary < ZERO || hours_overtime < ZERO || rate_per_hour < ZERO) {
        printf("\nInvalid input. Values must be non-negative.\n");
        return;
    }

    total_salary = basic_salary + (hours_overtime * rate_per_hour);

    printf("\nTotal salary for the month is: %.2f\n", total_salary);
}