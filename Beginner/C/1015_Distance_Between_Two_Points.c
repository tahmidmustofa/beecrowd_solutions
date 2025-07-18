#include <stdio.h>

int main() {
    
    float x1; float y1;
    scanf("%f", &x1); scanf("%f", &y1);
    
    float x2; float y2;
    scanf("%f", &x2); scanf("%f", &y2);
    
    float distance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    
    float half_guess = distance / 2.0;
    float previous_guess = 0.0;
    
    while(half_guess != previous_guess) {
        previous_guess = half_guess;
        half_guess = (half_guess + distance / half_guess) / 2.0;
    }
    
    printf("%.4f\n", half_guess);
    
    return 0;
}

// Solved By Tahmid Mustofa
