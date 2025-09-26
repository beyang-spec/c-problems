#include <stdio.h>
#include <conio.h>

int main () {
    int i, j, rows;

    printf("*******print right triangle pattern using asterisk*******\n\n");
    printf("Enter the number of rows::");
    scanf("%d", &rows);

    for (i=0; i <=rows; i++) 
    {
        for (j=0; j<=i; j++) {
            printf("*");
        }
            printf("*\n");
    }
    return 0;
}