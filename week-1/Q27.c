#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int isPrime(int n)
{
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int isEven(int n)
{
    return (n % 2 == 0) ? 1 : 0;
}

int main()
{
    int choice, num;

    while (1)
    {
        printf("\n1. Factorial\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Your choice? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Factorial of %d is %d\n", num, factorial(num));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num))
                printf("%d is a prime number\n", num);
            else
                printf("%d is not a prime number\n", num);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isEven(num))
                printf("%d is an even number\n", num);
            else
                printf("%d is an odd number\n", num);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Please choose a valid option.\n");
        }
    }
    return 0;
}
