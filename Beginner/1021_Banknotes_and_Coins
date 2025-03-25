#include <stdio.h>

int main() {
    
    float value;
    scanf("%f", &value);

    int value_in_cents = (int)(value * 100 + 0.5);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    int notes_length = sizeof(notes) / sizeof(notes[0]);
    int coins_length = sizeof(coins) / sizeof(coins[0]);

    printf("NOTAS:\n");
    for (int i = 0; i < notes_length; i++) {
        int notes_result = value_in_cents / notes[i];
        printf("%d nota(s) de R$ %.2f\n", notes_result, notes[i] / 100.0);
        value_in_cents -= notes_result * notes[i];
    }

    printf("MOEDAS:\n");
    for (int j = 0; j < coins_length; j++) {
        int coins_result = value_in_cents / coins[j];
        printf("%d moeda(s) de R$ %.2f\n", coins_result, coins[j] / 100.0);
        value_in_cents -= coins_result * coins[j];
    }

    return 0;
}

// Solved by Tahmid Mustofa
