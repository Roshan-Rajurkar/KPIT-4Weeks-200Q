#include <stdio.h>

int main()
{
    int a = 10, b = 12, c = 0;

    // Expression 1: a != 6 && b > 5
    int exp1 = (a != 6) && (b > 5);

    // Expression 2: a == 9 || b < 3
    int exp2 = (a == 9) || (b < 3);

    // Expression 3: ! ( a < 10 )
    int exp3 = !(a < 10);

    // Expression 4: ! ( a > 5 && c )
    int exp4 = !(a > 5 && c);

    // Expression 5: 5 && c != 8 || !c
    int exp5 = (5 && c != 8) || !c;

    // Print the values of the expressions
    printf("Expression 1 value: %d\n", exp1);
    printf("Expression 2 value: %d\n", exp2);
    printf("Expression 3 value: %d\n", exp3);
    printf("Expression 4 value: %d\n", exp4);
    printf("Expression 5 value: %d\n", exp5);

    return 0;
}
