#include <stdio.h>

int main() {

    float income, Net_income, tax= 0;
    
    printf("Enter monthly income:");
    scanf("%f", &income);

    if (income <= 10000) {
        tax=0;
    }
    else if (income <= 30000) {
       tax = income * 0.10;
    
    }
    else (income > 30001); {
        tax = income * 0.20;
    }
    Net_income = income - tax;

    printf("\nIncome: %.2f ",income);
    printf("\nTax: %.2f", tax);
    printf("\nNet income: %.2f", Net_income);
    return 0;
}