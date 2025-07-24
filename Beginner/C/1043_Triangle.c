#include <stdio.h>
 
int main() {
 
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    
    if (A + B > C && B + C > A && A + C > B) {
        float perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        float area = (A + B) * C / 2.0;
        printf("Area = %.1f\n", area);
    }
 
    return 0;
}

// Solved by Tahmid Mustofa
