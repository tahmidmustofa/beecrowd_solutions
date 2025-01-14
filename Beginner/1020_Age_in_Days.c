#include <stdio.h>

int main() {

    int age_in_days;
    scanf("%d", &age_in_days);

    int years = age_in_days / 365;
    printf("%d ano(s)\n", years);

    int months = (age_in_days % 365) / 30;
    printf("%d mes(es)\n", months);

    int days = ((age_in_days % 365) % 30);
    printf("%d dia(s)\n", days);

    return 0;
}

// Solved By Tahmid Mustofa
