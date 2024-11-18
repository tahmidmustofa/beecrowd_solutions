#include <stdio.h>

int main() {
    
    double radius;
    scanf("%lf", &radius);
    
    double volume = (4/3.0) * 3.14159 * radius * radius * radius;
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}

// Solved By Tahmid Mustofa
