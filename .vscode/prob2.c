#include <stdio.h>
#include <stdlib.h>

int main() {
    int b;
    
    printf("Enter a number:");
    scanf("%d", &b);
    
    if ((b >= 90 && b <= 100) || (b>=10 && b <= 30)) {
        printf("\nYes");
    }
    else {
        printf("\nNo");
    }
    return 0;
}