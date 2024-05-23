#include <stdio.h>

// Function to determine profit or loss
void determine_profit_loss()
{
    float cost_price, selling_price, profit_loss;
    printf("Enter cost price: ");
    scanf("%f", &cost_price);
    printf("Enter selling price: ");
    scanf("%f", &selling_price);
    profit_loss = selling_price - cost_price;
    if (profit_loss > 0)
        printf("Seller has made a profit of $%.2f\n", profit_loss);
    else if (profit_loss < 0)
        printf("Seller has incurred a loss of $%.2f\n", -profit_loss);
    else
        printf("No profit, no loss\n");
}

// Function to determine odd or even number
void determine_odd_even()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is an even number\n", num);
    else
        printf("%d is an odd number\n", num);
}

// Function to determine leap year
void determine_leap_year()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

// Function to reverse and compare numbers
void reverse_and_compare()
{
    int num, original_num, reversed_num = 0, remainder;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    original_num = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    if (original_num == reversed_num)
        printf("The original and reversed numbers are equal\n");
    else
        printf("The original and reversed numbers are not equal\n");
}

int main()
{
    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Determine Profit or Loss\n");
        printf("2. Determine Odd or Even Number\n");
        printf("3. Determine Leap Year\n");
        printf("4. Reverse and Compare Numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            determine_profit_loss();
            break;
        case 2:
            determine_odd_even();
            break;
        case 3:
            determine_leap_year();
            break;
        case 4:
            reverse_and_compare();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);
    return 0;
}
