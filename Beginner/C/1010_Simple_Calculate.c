#include <stdio.h>
 
int main() {
    
    int code;
    scanf("%d", &code);
    
    int numberOFunits;
    scanf("%d", &numberOFunits);
    
    float price;
    scanf("%f", &price);
    
    float amount = numberOFunits * price;
    
    int code2;
    scanf("%d", &code2);
    
    int numberOFunits2;
    scanf("%d", &numberOFunits2);
    
    float price2;
    scanf("%f", &price);
    
    float amount2 = (numberOFunits2 * price);
    
    float total_amount = amount + amount2;
    printf("VALOR A PAGAR: R$ %.2f\n", total_amount);
    
    return 0;
}

// Solved By Tahmid Mustofa
