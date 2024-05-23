#include <stdio.h>

// Function to calculate overtime pay
void calculate_overtime_pay() {
    int num_employees, hours_worked, overtime_hours;
    float overtime_pay;
    
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    for (int i = 1; i <= num_employees; i++) {
        printf("\nEnter the hours worked by employee %d: ", i);
        scanf("%d", &hours_worked);

        if (hours_worked > 40) {
            overtime_hours = hours_worked - 40;
            overtime_pay = overtime_hours * 12.0;
            printf("Overtime pay for employee %d: Rs. %.2f\n", i, overtime_pay);
        } else {
            printf("No overtime pay for employee %d\n", i);
        }
    }
}

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate power
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to print ASCII values and characters
void print_ascii() {
    int i = 0;
    while (i <= 255) {
        printf("ASCII value: %d, Character: %c\n", i, i);
        i++;
    }
}

// Function to print Armstrong numbers between 1 and 500
void print_armstrong_numbers() {
    int num, digit, sum;
    printf("Armstrong numbers between 1 and 500:\n");
    for (int i = 1; i <= 500; i++) {
        num = i;
        sum = 0;
        while (num != 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if (sum == i)
            printf("%d\n", i);
    }
}

// Function to play matchstick game
void play_matchstick_game() {
    int matchsticks = 21, user_choice, computer_choice;
    while (1) {
        printf("Number of matchsticks remaining: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_choice);
        if (user_choice < 1 || user_choice > 4) {
            printf("Invalid choice! Please pick between 1 and 4.\n");
            continue;
        }
        matchsticks -= user_choice;
        computer_choice = 5 - user_choice;
        printf("Computer picks %d matchsticks.\n", computer_choice);
        matchsticks -= computer_choice;
        if (matchsticks <= 0) {
            printf("Computer wins!\n");
            break;
        }
    }
}

// Function to count positive, negative, and zero numbers
void count_numbers() {
    int num, positive = 0, negative = 0, zero = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
}

// Function to find octal equivalent
void find_octal_equivalent() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Octal equivalent of %d is %o\n", num, num);
}

// Function to find range of numbers
void find_range() {
    int num, min = 0, max = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < min)
            min = num;
        if (num > max)
            max = num;
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Range: %d\n", max - min);
}

int main() {
    calculate_overtime_pay();
    printf("\n");

    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n\n", n, factorial(n));

    int base, exponent;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("Result: %d\n\n", power(base, exponent));

    print_ascii();
    printf("\n");

    print_armstrong_numbers();
    printf("\n");

    play_matchstick_game();
    printf("\n");

    count_numbers();
    printf("\n");

    find_octal_equivalent();
    printf("\n");

    find_range();
    printf("\n");

    return 0;
}
