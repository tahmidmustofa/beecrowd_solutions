#include <stdio.h>

int main() {
    
    int total_distance_traveled_in_kilometers;
    scanf("%d", &total_distance_traveled_in_kilometers);
    
    float total_fuel_spent_in_litres;
    scanf("%f", &total_fuel_spent_in_litres);
    
    float average_consumption = total_distance_traveled_in_kilometers / total_fuel_spent_in_litres;
    
    printf("%.3f km/l\n", average_consumption);
    
    return 0;
}

// Solved By Tahmid Mustofa
