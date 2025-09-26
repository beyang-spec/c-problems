#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Function prototypes
void basicArithmetic();
void remainderPractice();
void quadraticPractice();
void militaryToOrdinary();
void tinCanVolume();
void pyramidVolume();

int main() {
    int choice;

    srand(time(NULL));

    do {
        printf("\n=== Math Practice Hub ===\n");
        printf("1. Basic Arithmetic (+ - * /)\n");
        printf("2. Find Remainder (modulo)\n");
        printf("3. Solve Quadratic Equation\n");
        printf("4. Convert Military to Ordinary Time\n");
        printf("5. Tin Can Volume & Surface Area (Cylinder)\n");
        printf("6. Pyramid Volume\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: basicArithmetic(); break;
            case 2: remainderPractice(); break;
            case 3: quadraticPractice(); break;
            case 4: militaryToOrdinary(); break;
            case 5: tinCanVolume(); break;
            case 6: pyramidVolume(); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

// 1. Basic Arithmetic
void basicArithmetic() {
    int a = rand() % 20 + 1;
    int b = rand() % 20 + 1;
    char ops[] = {'+', '-', '*', '/'};
    char op = ops[rand() % 4];
    int user, correct;

    if (op == '+') correct = a + b;
    else if (op == '-') correct = a - b;
    else if (op == '*') correct = a * b;
    else correct = a / b;

    printf("Solve: %d %c %d = ", a, op, b);
    scanf("%d", &user);

    if (user == correct) printf("Correct!\n");
    else printf("Wrong. Answer: %d\n", correct);
}

// 2. Remainder
void remainderPractice() {
    int a = rand() % 100 + 1;
    int b = (rand() % 20) + 1;
    int user;

    printf("Find the remainder: %d %% %d = ", a, b);
    scanf("%d", &user);

    if (user == a % b) printf("Correct!\n");
    else printf("Wrong. Answer: %d\n", a % b);
}

// 3. Quadratic
void quadraticPractice() {
    double a, b, c, d, r1, r2;
    printf("Enter coefficients a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots: %.2lf and %.2lf\n", r1, r2);
    } else if (d == 0) {
        r1 = r2 = -b/(2*a);
        printf("Roots are equal: %.2lf\n", r1);
    } else {
        printf("No real roots (discriminant < 0)\n");
    }
}

// 4. Military to Ordinary
void militaryToOrdinary() {
    int h, m;
    printf("Enter time (HH MM): ");
    scanf("%d %d", &h, &m);

    if (h == 0) { h = 12; printf("Time: %02d:%02d AM\n", h, m); }
    else if (h == 12) printf("Time: %02d:%02d PM\n", h, m);
    else if (h > 12) printf("Time: %02d:%02d PM\n", h - 12, m);
    else printf("Time: %02d:%02d AM\n", h, m);
}

// 5. Tin Can (Cylinder)
void tinCanVolume() {
    double r, h, vol, sa;
    printf("Enter radius and height: ");
    scanf("%lf %lf", &r, &h);

    vol = M_PI * r * r * h;
    sa = 2 * M_PI * r * (h + r);

    printf("Volume = %.2lf\nSurface Area = %.2lf\n", vol, sa);
}

// 6. Pyramid
void pyramidVolume() {
    double base, height;
    printf("Enter base area and height: ");
    scanf("%lf %lf", &base, &height);

    printf("Volume = %.2lf\n", (base * height) / 3.0);
}
