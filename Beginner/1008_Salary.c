#include <stdio.h>

int main() {
    
    int number;
    scanf("%d", &number);
    
    int hours;
    scanf("%d", &hours);
    
    float amount;
    scanf("%f", &amount);
    
    float salary = hours * amount;
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    
    return 0;
}

// Solved By Tahmid Mustofa
