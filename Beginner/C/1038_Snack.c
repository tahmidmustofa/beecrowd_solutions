#include <stdio.h>

int main() {
    
    int product_code, quantity;
    
    scanf("%d %d", &product_code, &quantity);
    
    if (product_code == 1) {
        float totalPrice = 4.00 * quantity;
        printf("Total: R$ %.2f\n", totalPrice);
    }
    
    else if (product_code == 2) {
        float totalPrice = 4.50 * quantity;
        printf("Total: R$ %.2f\n", totalPrice);
    }
    
    else if (product_code == 3) {
        float totalPrice = 5.00 * quantity;
        printf("Total: R$ %.2f\n", totalPrice);
    }
    
    else if (product_code == 4) {
        float totalPrice = 2.00 * quantity;
        printf("Total: R$ %.2f\n", totalPrice);
    }
    
    else if (product_code == 5) {
        float totalPrice = 1.50 * quantity;
        printf("Total: R$ %.2f\n", totalPrice);
    }
    
    return 0;
}

// Solved by Tahmid Mustofa
