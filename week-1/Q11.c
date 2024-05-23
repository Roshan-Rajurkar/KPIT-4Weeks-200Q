#include <stdio.h>

int main()
{
    // Program (a)
    {
        int tag = 0, code = 1;
        if (tag == 0)
        {
            (code > 1 ? printf("\nHello") : printf("\nHi"));
        }
        else
        {
            printf("\nHello Hi !!");
        }
    }

    // Program (b)
    {
        int ji = 65;
        printf("\n%d", ji >= 65 ? ji : 'C');
    }

    // Program (c)
    {
        int i = 10, j;
        i >= 5 ? (j = 10) : (j = 15);
        printf("\n%d %d", i, j);
    }

    // Program (d)
    {
        int a = 5, b = 6;
        (a == b ? printf("%d", a) : 0);
    }

    // Program (e)
    {
        int n = 9;
        (n == 9 ? printf("You are correct") : printf("You are wrong"));
    }

    // Program (f)
    {
        int kk = 65, ll;
        ll = (kk == 65 ? printf("\n kk is equal to 65") : printf("\n kk is not equal to 65"));
    }

    // Program (g)
    {
        int x = 10, y = 20;
        x == 20 && y != 10 ? printf("True") : printf("False");
    }

    return 0;
}
// Program (a):

// Correct, no errors.

// Program (b):

// The ternary operation is not used in printf correctly. The correction uses printf("\n%d", ji >= 65 ? ji : 'C').
// Program (c):

// Correct, no errors.

// Program (d):

// The ternary operator cannot be used without an else part and must be followed by an action or a default value. The correction uses (a == b ? printf("%d", a) : 0).
// Program (e):

// Misplaced semicolons. The correction removes the extra semicolons.

// Program (f):

// Incorrect use of the ternary operator. Corrected to ll = (kk == 65 ? printf("\n kk is equal to 65") : printf("\n kk is not equal to 65")).

// Program (g):

// Correct, no errors.