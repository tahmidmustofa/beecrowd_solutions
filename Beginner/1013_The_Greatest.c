#include <stdio.h>

int main() {
    
    int a;
    scanf("%d", &a);
    
    int b;
    scanf("%d", &b);
    
    int c;
    scanf("%d", &c);
    
    int MaiorAB;
    int MaiorAB_C;
    
    if ((a - b) > 0) {
        MaiorAB = ((a + b + (a - b))) / 2;
    }
    else {
        MaiorAB = ((a + b + (b - a))) / 2;
    }
    
    if ((MaiorAB - c) > 0) {
        MaiorAB_C = ((MaiorAB + c + (MaiorAB - c))) / 2;
    } else {
        MaiorAB_C = ((MaiorAB + c + (c - MaiorAB))) / 2; 
    }
    
    printf("%d eh o maior\n", MaiorAB_C);
    
    return 0;
}

// Solved By Tahmid Mustofa
