#include <stdio.h>
/**
 * The main function is the start of the program.
 * Arithmetic Operators are the types of operators in C that are used
 * to perform,Mathematical operators in a C program.
 * They can be used in programs to define expressions
 * and mathematical formulas.
 * Return: 0  for the successful execution.
 */
int main(void)
{
int a = 21;
int b = 10;
int c;
c = a + b;
printf("Line 1 - Value of c is %d\n", c);
c = a - b;
printf("Line 2 - Value of c is %d\n", c);
c = a * b;
printf("Line 3 - Value of c is %d\n", c);
c = a / b;
printf("Line 4 - Value of c is %d\n", c);
c = a % b;
printf("Line 5 - Value of c is %d\n", c);
c = a++;
printf("Line 6 - Value of c is %d\n", c);
c = a--;
printf("Line 7 - Value of c is %d\n", c);
return (0);
}
