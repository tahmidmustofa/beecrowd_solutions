#include <stdio.h>

int main() {
    
    char name[100];
    scanf("%s", name);
    
    double fixed_salary;
    scanf("%lf", &fixed_salary);
    
    double sales;
    scanf("%lf", &sales);
    
    double percentage = (sales * 15.0) / 100.0;
    
    double total = fixed_salary + percentage;
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}

// Solved By Tahmid Mustofa

Salary with Bonus
