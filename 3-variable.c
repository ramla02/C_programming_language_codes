#include <stdio.h>
/**
 * The main function is the entry point of the program.
 * Variable declarations are placed at the top.
 * Variable definitions and initializations are done inside the main function.
 * Return: 0 for successful execution.
 */
extern int a, b;
extern int c;
extern float f;
int main(void)
{
int a, b;
int c;
float f;
a = 10;
b = 20;
c = a + b;
printf("value of c : %d\n", c);
f = 70.0 / 3.0;
printf("value of f : %f\n", f);
return (0);
}
