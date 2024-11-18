#include <stdio.h>

int main() {
    
    int time_spent_in_hours;
    scanf("%d", &time_spent_in_hours);
    
    int average_speed;
    scanf("%d", &average_speed);
    
    float liters_needed = (average_speed / 12.0) * time_spent_in_hours;
    printf("%.3f\n", liters_needed);
    
    return 0;
}

// Solved By Tahmid Mustofa
