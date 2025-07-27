#include <stdio.h>

int main() {

    int start, end, total;
    scanf("%d %d", &start, &end);

    if (start == end) {
        total = 24;
    }

    else if (start < end) {
        total = end - start;
    }

    else if (start > end) {
        total = 24 - start + end;
    }

    printf("O JOGO DUROU %d HORA(S)\n", total);

    return 0;
}

// Solved by Tahmid Mustofa
