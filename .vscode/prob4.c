#include <stdio.h>

int main() {

        int num;

        printf("Enter an interger:");
        scanf("%d", &num);

        if (num%2==0){
            printf("EVEN", num);
        }
        else
        printf("ODD", num);
    return 0;
}