#include <stdio.h>

int main()
{
    // (a) Print all prime numbers from 1 to 300
    printf("(a) Prime numbers from 1 to 300:\n");
    for (int i = 2; i <= 300; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", i);
    }
    printf("\n\n");

    // (b) Fill the entire screen with a smiling face (ASCII value 1)
    printf("(b) Entire screen filled with a smiling face:\n");
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            printf("%c", 1);
        }
        printf("\n");
    }
    printf("\n");

    // (c) Add first seven terms of the series 1! 2! 3! ...
    printf("(c) Sum of first seven terms of series 1! 2! 3! ...:\n");
    int sum = 0, factorial = 1;
    for (int i = 1; i <= 7; i++)
    {
        factorial *= i;
        sum += i * factorial;
    }
    printf("Sum: %d\n\n", sum);

    // (d) Generate all combinations of 1, 2, and 3
    printf("(d) All combinations of 1, 2, and 3:\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    printf("\n");

    // (e) Produce a table of values of i, y, and x
    printf("(e) Table of values of i, y, and x:\n");
    printf("   y   |   x   |   i   |\n");
    for (int y = 1; y <= 6; y++)
    {
        for (float x = 5.5; x <= 12.5; x += 0.5)
        {
            int i = 2 + (y + 0.5 * x);
            printf("  %2d  |  %.1f  |  %3d  |\n", y, x, i);
        }
    }
    printf("\n");

    // (f) Produce the given output pattern
    printf("(f) Output pattern:\n");
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    printf("\n");

    // Add your code for the remaining questions here

    return 0;
}
