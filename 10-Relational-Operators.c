#include <stdio.h>
/**
 * The main function is the start of the program.
 * The Relational Operators are used to compare two of the available values to,
 * understand what relationship the pairs of values share.
 * Example: Equal to(==), Not equal to(!=),Less than (<), Greater than(>),
 * Less than or Equal to(<=), Greater than or Equal to(>=).
 * Return: 0 for the successful execution.
 */
int main(void)
{
int a = 21;
int b = 10;
if (a == b)
{
	printf("Line 1 - a is equal to b\n");
}
else
{
	printf("Line 1 - a is not equal to b\n");
}
if (a < b)
{
	printf("Line 2 - a is less than b\n");
}
else
{
	printf("Line 2 - a is not less than b\n");
}
if (a > b)
{
	printf("Line 3 - a is greater than b\n");
}
else
{
	printf("Line 3 - a is not greater than b\n");
}
    /* lets change value of a and b*/
a = 5;
b = 20;
if (a <= b)
{
	printf("Line 4 - a is either less than or equal to b\n");
}
if (b >= a)
{
	printf("Line 5 - b is greater than or equal to a\n");
}
return (0);
}
