#include <stdio.h>
#include <math.h>

int main() {
    float H, R, S, volume, surfaceArea;
    
    printf("Enter height of tin can (H): ");
    scanf("%f", &H);
    printf("Enter radius of base (R): ");
    scanf("%f", &R);
    
    // Cylinder volume and surface area
    volume = M_PI * R * R * H;
    surfaceArea = (2 * M_PI * R * H) + (2 * M_PI * R * R);
    
    printf("\nCylinder Volume = %.2f\n", volume);
    printf("Cylinder Surface Area = %.2f\n", surfaceArea);
    
    // Pyramid version
    printf("\nEnter side of square base (S): ");
    scanf("%f", &S);
    printf("Enter height of pyramid (H): ");
    scanf("%f", &H);
    
    // Volume of pyramid
    volume = (S * S * H) / 3.0;
    
    // Surface area of pyramid (base + 4 triangular faces)
    float slantHeight = sqrt((S/2.0)*(S/2.0) + H*H);
    surfaceArea = (S * S) + (2 * S * slantHeight);
    
    printf("Pyramid Volume = %.2f\n", volume);
    printf("Pyramid Surface Area = %.2f\n", surfaceArea);
    
    return 0;
}
