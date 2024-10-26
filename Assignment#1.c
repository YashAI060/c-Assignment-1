// Name: Yash
// Roll Number: 24AI60
// Assignment 1

// 1) C program to read two integers and display their sum
#include <stdio.h>

int main() {
    int a, b, sum;
    
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);

    sum = a + b;
    

    printf("The sum of %d and %d is: %d\n", a, b, sum);
    
    return 0;
}

/////////////////////////////////////////////////////////

// 2) C program to read an integer and display its square
#include <stdio.h>

int main() {
    int number, square;
    

    printf("Enter an integer: ");
    scanf("%d", &number);
    
    square = number * number;
    
    printf("The square of %d is: %d\n", number, square);
    
    return 0;
}

/////////////////////////////////////////////////////////

// 3) C program to convert Celsius to Fahrenheit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}

/////////////////////////////////////////////////////////

// 4) C program to convert Fahrenheit to Celsius
#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}
