#include <stdio.h>

int main() {
    double amount, finalAmount;
    
    printf("Enter the total shopping amount: ");
    scanf("%lf", &amount);
    
    if (amount > 5000)
        finalAmount = amount * 0.80;  // 20% discount
    else if (amount >= 3000 && amount <= 5000)
        finalAmount = amount * 0.90;  // 10% discount
    else
        finalAmount = amount;  // No discount
    
    printf("Final amount after discount: %.2f\n", finalAmount);
    
    return 0;
}
