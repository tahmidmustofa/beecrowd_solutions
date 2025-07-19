#include <stdio.h>
#include <math.h>

int main() {
    
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double discriminant = pow(B, 2) - 4 * A * C;
    
    if (A == 0 || discriminant < 0) {
        printf("Impossivel calcular\n");
    }
    
    else {
        
        double root1 = (-B + sqrt(discriminant)) / (2 * A);
        double root2 = (-B - sqrt(discriminant)) / (2 * A);
        printf("R1 = %.5lf\nR2 = %.5lf\n", root1, root2);
    }
    
    return 0;
}

// Solved by Tahmid Mustofa
