#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int days_remaining;	
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (month > 2)
{
day++;
}
if (day > 60)
{      
days_remaining = 366 - day;
}        
else
{
days_remaining = 365 - day;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", days_remaining);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
if (day > 365)
{   
printf("Invalid date: %02d/%02d/%04d\n", month, day - 365, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}

