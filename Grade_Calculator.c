#include <stdio.h>

int main() {
    double mark1, mark2, mark3, average;
    
    printf("Enter marks for three subjects: ");
    scanf("%lf %lf %lf", &mark1, &mark2, &mark3);
    
    average = (mark1 + mark2 + mark3) / 3;
    
    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 80)
        printf("Grade: B\n");
    else if (average >= 70)
        printf("Grade: C\n");
    else if (average >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    
    return 0;
}
