#include <stdio.h>

int main() {
    
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    float average = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
    printf("Media: %.1f\n", average);
    
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    
    else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    }
    
    else if (average >= 5.0 && average <= 6.9) {
        
        printf("Aluno em exame.\n");
        
        float score;
        scanf("%f", &score);
        printf("Nota do exame: %.1f\n", score);
        
        float newAverage = (score + average) / 2;
        
        if (newAverage >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        
        else if (newAverage <= 4.9) {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", newAverage);
    }
    
    return 0;
}

// Solved by Tahmid Mustofa
