#include <stdio.h>


void add(int a, int b)
{
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void sub(int a, int b)
{
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void mul(int a, int b)
{
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void div(int a, int b)
{

    printf("Division of %d and %d is %d\n", a, b, a / b);
}

void mod(int a, int b)
{
    printf("Modulus of %d and %d is %d\n", a, b, a % b);
}

int main()
{
    int choice, a, b;

    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            add(a, b);
            break;

        case 2:
            sub(a, b);
            break;

        case 3:
            mul(a, b);
            break;

        case 4:
            div(a, b);
            break;

        case 5:
            mod(a, b);
            break;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}