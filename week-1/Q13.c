#include <stdio.h>

// (a) Determine whether the character entered through the keyboard is a lowercase alphabet or not
void check_lowercase_alphabet()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    (ch >= 'a' && ch <= 'z') ? printf("Lowercase Alphabet\n") : printf("Not a Lowercase Alphabet\n");
}

// (b) Determine whether a character entered through the keyboard is a special symbol or not
void check_special_symbol()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    ((ch < '0' || (ch > '9' && ch < 'A') || (ch > 'Z' && ch < 'a') || ch > 'z')) ? printf("Special Symbol\n") : printf("Not a Special Symbol\n");
}

// (c) Determine whether a year entered through the keyboard is a leap year or not
void check_leap_year()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("Leap Year\n") : printf("Not a Leap Year\n");
}

// (d) Find the greatest of the three numbers entered through the keyboard using conditional operators
void find_greatest_of_three()
{
    int a, b, c, greatest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    greatest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Greatest: %d\n", greatest);
}

int main()
{
    printf("(a) Check if character is a lowercase alphabet:\n");
    check_lowercase_alphabet();

    printf("\n(b) Check if character is a special symbol:\n");
    check_special_symbol();

    printf("\n(c) Check if year is a leap year:\n");
    check_leap_year();

    printf("\n(d) Find the greatest of three numbers:\n");
    find_greatest_of_three();

    return 0;
}
