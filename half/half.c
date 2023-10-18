// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    //Bill Total
    float bill_amount;
    bill_amount = x;
    do
    {
        bill_amount = get_float("Bill: ");
    }
    while (bill _amount < 0);

    //Tax Percentage
    float tax_percent;
    tax_percent = y;
    do
    {
        tax_percent = get_float("Sale Tax Percent: ");
    }
    while (tax_percen)

    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    return 0.0;
}
