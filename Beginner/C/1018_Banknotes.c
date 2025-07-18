#include <stdio.h>

int main() {

    int money;
    scanf("%d", &money);

    printf("%d\n", money);

    int hundred_notes = money / 100;
    printf("%d nota(s) de R$ 100,00\n", hundred_notes);

    int fifty_notes = (money % 100) / 50;
    printf("%d nota(s) de R$ 50,00\n", fifty_notes);

    int twenty_notes = ((money % 100) % 50) / 20;
    printf("%d nota(s) de R$ 20,00\n", twenty_notes);

    int ten_notes = (((money % 100) % 50) % 20) / 10;
    printf("%d nota(s) de R$ 10,00\n", ten_notes);

    int five_notes = ((((money % 100) % 50) % 20) % 10) / 5;
    printf("%d nota(s) de R$ 5,00\n", five_notes);

    int two_notes = (((((money % 100) % 50) % 20) % 10) % 5) / 2;
    printf("%d nota(s) de R$ 2,00\n", two_notes);

    int one_notes = ((((((money % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    printf("%d nota(s) de R$ 1,00\n", one_notes);

    return 0;
}

// Solved By Tahmid Mustofa
