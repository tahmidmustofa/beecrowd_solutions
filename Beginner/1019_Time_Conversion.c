#include <stdio.h>

int main() {

    int duration_in_seconds;
    scanf("%d", &duration_in_seconds);

    int hours = duration_in_seconds / 3600;
    int minutes = (duration_in_seconds % 3600) / 60;
    int seconds = ((duration_in_seconds % 3600) % 60);

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

// Solved By Tahmid Mustofa
