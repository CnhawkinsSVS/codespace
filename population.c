#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for a starting # of lamas
    int start;
    do
    {
        start = get_int("Starting Size: ");
    }
    while (start < 9);

    //Prompt user for an ending # of lamas
    int goal;
    do
    {
        goal = get_int("Goal Size: ");
    }
    while (goal < start);

    // (Loop) How many years will it take to get to goal?
    // Every year 1/3 lamas born; 1/4 pass away
    int years = 0;
    







}