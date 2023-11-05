#include <stdio.h>
/**
 * The main function is the start of the program.
 * The static storage class instruct the compiler to keep a local variable in,
 * existance during the life-time of the program instead of creating and,
 * destroying it each time it comes into and goes out of scope.
 * When static is used on a class data member, it causes only one copy of,
 * that member to be shared by all the objects of its class.
 * Return: 0 for the successful execution.
 */
void func(void);
static int count = 5;
int main(void)
{
while (count--)
{
	func();
}
return (0);
}
void func(void)
{
static int i = 5;
i++;
printf("i is %d and count is %d\n", i, count);
}
