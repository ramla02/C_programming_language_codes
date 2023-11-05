#include <stdio.h>
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
/**
 * The main function is the start of the program.
 * The below code is a form to use #define preprocessor to define a constant.
 * Return: 0 for the successful  execution.
 */
int main(void)
{
int area;
area = LENGTH * WIDTH;
printf("value of area : %d", area);
printf("%c", NEWLINE);
return (0);
}
