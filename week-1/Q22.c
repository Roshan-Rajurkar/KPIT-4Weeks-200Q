#include <stdio.h>

int main()
{
    // Program (a)
    {
        int i = 0;
        while (i)
        {
            printf("\nHere is some mail for you");
        }
    }

    // Program (b)
    {
        int i = 1;
        while (i <= 5)
        {
            printf("\n%d", i);
            // Increment i
            i++;
        }
    }

    // Program (c)
    {
        int i = 1, j = 1;
        while (1)
        {
            if (i > 5)
                break;
            else
                j += i;
            printf("\n%d", j);
            i += j;
        }
    }

    // Program (d)
    {
        int i = 1;
        while (i <= 5)
        {
            printf("\n%c", 65);
            // Increment i
            i++;
        }
    }

    return 0;
}
