#include <stdio.h>

// Program (a)
void program_a()
{
    int x, min, max;
    printf("Enter two integers (max and x): ");
    scanf("%d %d", &max, &x);
    (x > max) ? (max = x) : (min = x);
    printf("Max: %d, Min: %d\n", max, min); // Added this line to make the program output clearer
}

// Program (b)
void program_b()
{
    int code;
    printf("Enter an integer code: ");
    scanf("%d", &code);
    (code > 1) ? printf("\nJerusalem") : (code < 1) ? printf("\nEddie")
                                                    : printf("\nC Brain");
}

// Program (c)
void program_c()
{
    float sal;
    printf("Enter the salary: ");
    scanf("%f", &sal);
    (sal < 40000 && sal > 25000) ? printf("Manager") : (sal < 25000 && sal > 15000) ? printf("Accountant")
                                                                                    : printf("Clerk");
}

int main()
{
    printf("Program (a):\n");
    program_a();

    printf("\nProgram (b):\n");
    program_b();

    printf("\nProgram (c):\n");
    program_c();

    return 0;
}
