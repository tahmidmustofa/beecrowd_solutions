#include <stdio.h>

int main() {
    
    int distance_in_kilometer;
    scanf("%d", &distance_in_kilometer);
    
    int time_needed_in_minutes = distance_in_kilometer * 2;
    printf("%d minutos\n", time_needed_in_minutes);
    
    return 0;
}

// Solved By Tahmid Mustofa
