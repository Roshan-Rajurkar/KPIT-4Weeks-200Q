#include <stdio.h>

int main()
{
    // (a)
    printf("(a) Output:\n");
    char suite_a = 3;
    switch (suite_a)
    {
    case 1:
        printf("\nDiamond");
    case 2:
        printf("\nSpade");
    default:
        printf("\nHeart");
    }
    printf("\nI thought one wears a suit\n\n");

    // (b)
    printf("(b) Output:\n");
    int c = 3;
    switch (c)
    {
    case 'v':
        printf("I am in case v\n");
        break;
    case 3:
        printf("I am in case 3\n");
        break;
    case 12:
        printf("I am in case 12\n");
        break;
    default:
        printf("I am in default\n");
    }
    printf("\n");

    // (c)
    printf("(c) Output:\n");
    int k, j_c = 2;
    switch (k = j_c + 1)
    {
    case 0:
        printf("\nTailor");
    case 1:
        printf("\nTutor");
    case 2:
        printf("\nTramp");
    default:
        printf("\nPure Simple Egghead!");
    }
    printf("\n\n");

    // (d)
    printf("(d) Output:\n");
    int i_d = 0;
    switch (i_d)
    {
    case 0:
        printf("\nCustomers are dicey");
    case 1:
        printf("\nMarkets are pricey");
    case 2:
        printf("\nInvestors are moody");
    case 3:
        printf("\nAt least employees are good");
    }
    printf("\n\n");

    // (e)
    printf("(e) Output:\n");
    int k_e;
    float j_e = 2.0;
    switch (k_e = j_e + 1)
    {
    case 3:
        printf("\nTrapped");
        break;
    default:
        printf("\nCaught!");
    }
    printf("\n\n");

    // (f)
    printf("(f) Output:\n");
    int ch = 'a' + 'b';
    switch (ch)
    {
    case 'a':
    case 'b':
        printf("\nYou entered b");
    case 'A':
        printf("\na as in ashar");
    case 'b' + 'a':
        printf("\nYou entered a and b");
    }
    printf("\n\n");

    // (g)
    printf("(g) Output:\n");
    int i_g = 1;
    switch (i_g - 2)
    {
    case -1:
        printf("\nFeeding fish");
    case 0:
        printf("\nWeeding grass");
    case 1:
        printf("\nMending roof");
    default:
        printf("\nJust to survive");
    }
    printf("\n");

    return 0;
}
