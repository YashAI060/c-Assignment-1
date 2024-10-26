#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+')
        printf("Result: %.2f\n", num1 + num2);
    else if (operator == '-')
        printf("Result: %.2f\n", num1 - num2);
    else if (operator == '*')
        printf("Result: %.2f\n", num1 * num2);
    else if (operator == '/')
        printf("Result: %.2f\n", num1 / num2);
    else
        printf("Invalid operator.\n");
    
    return 0;
}
