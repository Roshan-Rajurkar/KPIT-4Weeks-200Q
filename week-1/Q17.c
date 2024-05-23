#include <stdio.h>

int main()
{
    // Program (a)
    {
        int i = -4, j, num;
        j = (num < 0 ? 0 : num * num);
        printf("\n%d", j);

        // Output: 0
    }
    // Program (b)
    {
        int k, num = 30;
        k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);
        printf("\n%d", num);

        // Output: 30
    }

    // Program (c)
    {
        int j = 4;
        (!j != 1 ? printf("\nWelcome") : printf("\nGood Bye"));

        // Output: Welcome
    }

    return 0;
}
