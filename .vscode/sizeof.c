// C Program to Find the Size of int, float, double, and
// char using sizeof operator directly
#include <stdio.h>

int main() {
  
    // Determine and Print the size of int
    printf("Size of int: %u bytes\n", sizeof(int));

    // Determine and Print the size of float
    printf("Size of float: %u bytes\n", sizeof(float));

    // Determine and Print the size of double
    printf("Size of double: %u bytes\n", sizeof(double));

    // Determine and Print the size of char
    printf("Size of char: %u bytes\n", sizeof(char));

    return 0;
}