//  Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.

#include <stdio.h>

int main()
{
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);

    dearness_allowance = 0.40 * basic_salary;

    house_rent_allowance = 0.20 * basic_salary;

    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    printf("Ramesh's gross salary is: %.2f\n", gross_salary);

    return 0;
}
