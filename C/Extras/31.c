#include <stdio.h>
#include <conio.h>
#define MIN1 150001
#define MAX1 300000
#define RATE1 0.10
#define MIN2 300001
#define MAX2 500000
#define RATE2 0.20
#define MIN3 500001
#define RATE3 0.30
int main()
{
    double income, taxable_income, tax;
    printf("\nenter the income: ");
    scanf("%lf", &income);

    taxable_income = income - 150000;
    if (taxable_income <= 0)
        printf("\nno tax");
    else if (taxable_income >= MIN1 && taxable_income < MAX1)
        tax = (taxable_income - MIN1) * RATE1;
    else if (taxable_income >= MIN2 && taxable_income < MAX2)
        tax = (taxable_income - MIN2) * RATE2;
    else
        tax = (taxable_income - MIN3) * RATE3;
    printf("\ntax = %lf", tax);
    getch();
    return 0;
}