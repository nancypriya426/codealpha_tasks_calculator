/*
 * Program  : Basic Calculator
 * Task     : Arithmetic Operations using Switch Case
 * Author   : Nancy Priya
 * Date     : June 2026
 */

#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("===== CALCULATOR PROGRAM =====\n");
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    printf("\n==============================\n");

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    printf("==============================\n");
    return 0;
}