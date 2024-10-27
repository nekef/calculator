#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char choice;

    do {
        // Ask the user for the operation
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        // Ask the user for two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Perform the operation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }

        // Ask if the user wants to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any leftover newline

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
