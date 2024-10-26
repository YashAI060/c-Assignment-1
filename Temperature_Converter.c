#include <stdio.h>

int main() {
    char choice;
    double temperature, converted;
    
    printf("Enter C to convert Celsius to Fahrenheit, or F for Fahrenheit to Celsius: ");
    scanf(" %c", &choice);
    
    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        converted = (temperature * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", converted);
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        converted = (temperature - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", converted);
    } else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
