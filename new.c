#include <stdio.h>

int main() {

    int num;

    printf("Enter an integer:");
    scanf("%d", &num);

    if (num%3==0){
        printf("\n%d is a multiple by 3");
    }

    else if (num%5==0){
        printf("\n%d is a multiple by 5");

    }
    else if (num%3==0 && num%5==0) {
        printf("\n%d is both multiple by 3 and 5");

    }
    else
        printf("\n%d is not a multiple by 3 and 5");

    return 0;
    
}