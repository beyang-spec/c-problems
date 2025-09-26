#include <stdio.h>

int main() {
    float basic_salary, hours_overtime, rate_per_hour, total_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter overtime hours: ");
    scanf("%f", &hours_overtime);

    printf("Enter overtime rate per hour: ");
    scanf("%f", &rate_per_hour);

    total_salary = basic_salary + (hours_overtime * rate_per_hour);

    printf("\nTotal salary for the month is: %.2f\n", total_salary);

    return 0;
}