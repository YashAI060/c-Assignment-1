// Name: Yash
// Roll Number: 24AI60
// Assignment 1

// 1) C program to read two integers and display their sum
#include <stdio.h>

int main() {
    int a, b, sum;
    
    // Reading two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);
    
    // Calculating sum
    sum = a + b;
    
    // Displaying the sum
    printf("The sum of %d and %d is: %d\n", a, b, sum);
    
    return 0;
}

/////////////////////////////////////////////////////////

// 2) C program to read an integer and display its square
#include <stdio.h>

int main() {
    int number, square;
    
    // Reading an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Calculating the square
    square = number * number;
    
    // Displaying the square
    printf("The square of %d is: %d\n", number, square);
    
    return 0;
}

/////////////////////////////////////////////////////////

// 3) C program to convert Celsius to Fahrenheit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Reading temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Converting to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    
    // Displaying the Fahrenheit temperature
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}

/////////////////////////////////////////////////////////

// 4) C program to convert Fahrenheit to Celsius
#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    // Reading temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Converting to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    
    // Displaying the Celsius temperature
    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}
