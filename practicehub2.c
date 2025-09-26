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
void factorialPractice();
void primeCheck();
void gcdLcm();
void heronTriangle();
void sumOfDigits();
void simpleCompoundInterest();
void evenOddCheck();
void averageNumbers();
void powerAndSqrt();
void mixedQuiz();

int main() {
    int choice;
    srand(time(NULL));

    do {
        printf("\n=== Math Practice Hub ===\n");
        printf(" 1. Basic Arithmetic\n");
        printf(" 2. Find Remainder\n");
        printf(" 3. Solve Quadratic Equation\n");
        printf(" 4. Convert Military to Ordinary Time\n");
        printf(" 5. Tin Can (Cylinder) Volume & Surface\n");
        printf(" 6. Pyramid Volume\n");
        printf(" 7. Factorial\n");
        printf(" 8. Prime Check\n");
        printf(" 9. GCD & LCM\n");
        printf("10. Area of Triangle (Heron's formula)\n");
        printf("11. Sum of Digits\n");
        printf("12. Simple & Compound Interest\n");
        printf("13. Even or Odd\n");
        printf("14. Average of Numbers\n");
        printf("15. Powers & Square Root\n");
        printf("16. Random Mixed Quiz\n");
        printf(" 0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: basicArithmetic(); break;
            case 2: remainderPractice(); break;
            case 3: quadraticPractice(); break;
            case 4: militaryToOrdinary(); break;
            case 5: tinCanVolume(); break;
            case 6: pyramidVolume(); break;
            case 7: factorialPractice(); break;
            case 8: primeCheck(); break;
            case 9: gcdLcm(); break;
            case 10: heronTriangle(); break;
            case 11: sumOfDigits(); break;
            case 12: simpleCompoundInterest(); break;
            case 13: evenOddCheck(); break;
            case 14: averageNumbers(); break;
            case 15: powerAndSqrt(); break;
            case 16: mixedQuiz(); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

// ============= FUNCTIONS =====================

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

void remainderPractice() {
    int a = rand() % 100 + 1;
    int b = (rand() % 20) + 1;
    int user;

    printf("Find remainder: %d %% %d = ", a, b);
    scanf("%d", &user);

    if (user == a % b) printf("Correct!\n");
    else printf("Wrong. Answer: %d\n", a % b);
}

void quadraticPractice() {
    double a, b, c, d, r1, r2;
    printf("Enter a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots: %.2lf and %.2lf\n", r1, r2);
    } else if (d == 0) {
        r1 = r2 = -b/(2*a);
        printf("Equal roots: %.2lf\n", r1);
    } else {
        printf("No real roots\n");
    }
}

void militaryToOrdinary() {
    int h, m;
    printf("Enter time (HH MM): ");
    scanf("%d %d", &h, &m);

    if (h == 0) { h = 12; printf("Time: %02d:%02d AM\n", h, m); }
    else if (h == 12) printf("Time: %02d:%02d PM\n", h, m);
    else if (h > 12) printf("Time: %02d:%02d PM\n", h - 12, m);
    else printf("Time: %02d:%02d AM\n", h, m);
}

void tinCanVolume() {
    double r, h;
    printf("Enter radius and height: ");
    scanf("%lf %lf", &r, &h);

    printf("Volume = %.2lf\nSurface Area = %.2lf\n",
        M_PI*r*r*h, 2*M_PI*r*(h+r));
}

void pyramidVolume() {
    double base, height;
    printf("Enter base area and height: ");
    scanf("%lf %lf", &base, &height);

    printf("Volume = %.2lf\n", (base*height)/3.0);
}

void factorialPractice() {
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) fact*=i;
    printf("Factorial = %d\n", fact);
}

void primeCheck() {
    int n, isPrime=1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n<=1) isPrime=0;
    for(int i=2;i<=n/2;i++) if(n%i==0) {isPrime=0; break;}
    if(isPrime) printf("Prime\n"); else printf("Not Prime\n");
}

void gcdLcm() {
    int a,b,x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    x=a; y=b;
    while(y!=0){int t=y;y=x%y;x=t;}
    printf("GCD = %d\nLCM = %d\n", x, (a*b)/x);
}

void heronTriangle() {
    double a,b,c,s;
    printf("Enter three sides: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    s=(a+b+c)/2;
    printf("Area = %.2lf\n", sqrt(s*(s-a)*(s-b)*(s-c)));
}

void sumOfDigits() {
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){sum+=n%10;n/=10;}
    printf("Sum of digits = %d\n",sum);
}

void simpleCompoundInterest() {
    double p,r,t;
    printf("Enter principal, rate, time: ");
    scanf("%lf %lf %lf", &p,&r,&t);
    printf("Simple Interest = %.2lf\n", (p*r*t)/100);
    printf("Compound Interest = %.2lf\n", p*pow((1+r/100),t)-p);
}

void evenOddCheck() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n%2==0) printf("Even\n"); else printf("Odd\n");
}

void averageNumbers() {
    int n; double sum=0;
    printf("How many numbers? ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){double x;printf("Enter #%d: ",i);scanf("%lf",&x);sum+=x;}
    printf("Average = %.2lf\n", sum/n);
}

void powerAndSqrt() {
    double x,y;
    printf("Enter number and power: ");
    scanf("%lf %lf",&x,&y);
    printf("%.2lf ^ %.2lf = %.2lf\n", x,y,pow(x,y));
    printf("Square root of %.2lf = %.2lf\n", x, sqrt(x));
}

void mixedQuiz() {
    int type = rand()%5 + 1;
    printf("Random quiz!\n");
    if(type==1) basicArithmetic();
    else if(type==2) remainderPractice();
    else if(type==3) evenOddCheck();
    else if(type==4) sumOfDigits();
    else factorialPractice();
}
