#include <stdio.h>
#include <math.h>

int main() {
    
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double temp;
    
    if (A < C) {
        temp = C;
        C = A;
        A = temp;
    }
    
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }
    
    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }
    
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    }

    else {
        
    
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        
        if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        
        if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        
        if ((A == B && B != C) || (B == C && C != A) || (C == A && A != B)) {
            printf("TRIANGULO ISOSCELES\n");
        }
        
    }
    
    return 0;
}

// Solved by Tahmid Mustofa
