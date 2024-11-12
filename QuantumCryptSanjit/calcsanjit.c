#include <stdio.h>

// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main() {
    double num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}

void add(double a, double b) {
    printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
}

void subtract(double a, double b) {
    printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
}

void multiply(double a, double b) {
    printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
}

void divide(double a, double b) {
    if (b != 0)
        printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
    else
        printf("Error! Division by zero is not allowed.\n");
}
