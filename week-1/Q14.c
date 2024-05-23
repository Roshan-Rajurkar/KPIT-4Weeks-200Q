#include <stdio.h>

int main()
{
    // Program (a)
    {
        int a = 300, b, c;
        if (a >= 400)
            b = 300;
        c = 200;
        printf("\n(a) %d %d", b, c);
        // Output: Undefined behavior for b, 200 for c
    }

    // Program (b)
    {
        int a = 500, b, c;
        if (a >= 400)
            b = 300;
        c = 200;
        printf("\n(b) %d %d", b, c);
        // Output: 300 200
    }

    // Program (c)
    {
        int x = 10, y = 20;
        if (x == y)
            ;
        printf("\n(c) %d %d", x, y);
        // Output: 10 20
    }

    // Program (d)
    {
        int x = 3, y = 5;
        if (x == 3)
            printf("\n(d) %d", x);
        else
            ;
        printf("\n%d", y);
        // Output: 3 5
    }

    // Program (e)
    {
        int x = 3;
        float y = 3.0;
        if (x == y)
            printf("\n(e) x and y are equal");
        else
            printf("\n(e) x and y are not equal");
        // Output: x and y are equal
    }

    // Program (f)
    {
        int x = 3, y, z;
        y = x = 10;
        z = x < 10;
        printf("\n(f) x = %d y = %d z = %d", x, y, z);
        // Output: x = 10 y = 10 z = 0
    }

    // Program (g)
    {
        int k = 35;
        printf("\n(g) %d %d %d", k == 35, k = 50, k > 40);
        // Output: 1 50 1
    }

    // Program (h)
    {
        int i = 65;
        char j = 'A';
        if (i == j)
            printf("\n(h) C is WOW");
        else
            printf("\n(h) C is a headache");
        // Output: C is WOW
    }

    // Program (i)
    {
        int a = 5, b, c;
        b = a = 15;
        c = a < 15;
        printf("\n(i) a = %d b = %d c = %d", a, b, c);
        // Output: a = 15 b = 15 c = 0
    }

    // Program (j)
    {
        int x = 15;
        printf("\n(j) %d %d %d", x != 15, x = 20, x < 30);
        // Output: 0 20 1
    }

    return 0;
}
