#include <stdio.h>

int main()
{
    // Program (a)
    {
        int j;
        while (j <= 10)
        {
            printf("\n%d", j);
            j = j + 1;
        }
        // Output: Prints numbers from 0 to 10 on separate lines
    }

    // Program (b)
    {
        int i = 1;
        while (i <= 10)
            ;
        {
            printf("\n%d", i);
            i++;
        }
        // Output: Prints only 1 because of the semicolon after while loop
    }

    // Program (c)
    {
        int j;
        while (j <= 10)
        {
            printf("\n%d", j);
            j = j + 1;
        }
        // Output: Prints numbers from 0 to 10 on separate lines
    }

    // Program (d)
    {
        int x = 1;
        while (x == 1)
        {
            x = x - 1;
            printf("\n%d", x);
        }
        // Output: Prints 0
    }

    // Program (e)
    {
        int x = 1;
        while (x == 1)
            x = x - 1;
        printf("\n%d", x);
        // Output: Prints 0
    }

    // Program (f)
    {
        char x;
        for (x = 0; x <= 255; x++)
            printf("\nAscii value %d Character %c", x, x);
        // Output: Prints ASCII values and characters for all characters in ASCII range
    }

    // Program (g)
    {
        int x = 4, y, z;
        y = --x;
        z = x--;
        printf("\n%d %d %d", x, y, z);
        // Output: Prints "3 3 3"
    }

    // Program (h)
    {
        int x = 4, y = 3, z;
        z = x-- - y;
        printf("\n%d %d %d", x, y, z);
        // Output: Prints "3 3 1"
    }

    // Program (i)
    {
        while ('a' < 'b')
            printf("\nmalyalam is a palindrome");
        // Output: Prints "malyalam is a palindrome" infinitely
    }

    // Program (j)
    {
        int i = 10;
        while (i = 20)
            printf("\nA computer buff!");
        // Output: Prints "A computer buff!" infinitely
    }

    // Program (k)
    {
        int i;
        while (i = 10)
        {
            printf("\n%d", i);
            i = i + 1;
        }
        // Output: Prints "10" infinitely
    }

    // Program (l)
    {
        float x = 1.1;
        while (x == 1.1)
        {
            printf("\n%f", x);
            x = x - 0.1;
        }
        // Output: Prints "1.100000" infinitely
    }

    // Program (m)
    {
        while ('1' < '2')
            printf("\nIn while loop");
        // Output: Prints "In while loop" infinitely
    }

    // Program (n)
    {
        char x;
        for (x = 0; x <= 255; x++)
            printf("\nAscii value %d Character %c", x, x);
        // Output: Prints ASCII values and characters for all characters in ASCII range
    }

    // Program (o)
    {
        int x = 4, y = 0, z;
        while (x >= 0)
        {
            x--;
            y++;
            if (x == y)
                continue;
            else
                printf("\n%d %d", x, y);
        }
        // Output: Prints "3 1" and "2 2"
    }

    // Program (p)
    {
        int x = 4, y = 0, z;
        while (x >= 0)
        {
            if (x == y)
                break;
            else
                printf("\n%d %d", x, y);
            x--;
            y++;
        }
        // Output: Prints "4 0" and "3 1"
    }

    return 0;
}
