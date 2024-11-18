#include <stdio.h>

int main() {
    
    double A;
    scanf("%lf", &A);
    
    double B;
    scanf("%lf", &B);
    
    double C;
    scanf("%lf", &C);
    
    double area_of_rectangled_triangle = (1 / 2.0) * A * C;
    printf("TRIANGULO: %.3lf\n", area_of_rectangled_triangle);
    
    double area_of_radius_circle = 3.14159 * C * C;
    printf("CIRCULO: %.3lf\n", area_of_radius_circle);
    
    double area_of_trapezium = ((A + B) / 2.0) * C;
    printf("TRAPEZIO: %.3lf\n", area_of_trapezium);
    
    double area_of_square = B * B;
    printf("QUADRADO: %.3lf\n", area_of_square);
    
    double area_of_rectangle = A * B;
    printf("RETANGULO: %.3lf\n", area_of_rectangle);
    
    return 0;
}

// Solved By Tahmid Mustofa
