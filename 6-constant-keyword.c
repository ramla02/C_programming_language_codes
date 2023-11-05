#include <stdio.h>
/**
 * The main function is the start of the program.
 * The constant keyword is a prefix constant with specific type.
 * Return: 0 for the successful execution.
 */
int main(void)
{
const int LENGTH = 10;
	const int WIDTH = 5;
	const char NEWLINE = '\n';
	int area;
area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);
	return (0);
}
