#include <stdio.h>
#include <limits.h>
#include <float.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
printf("Storage size for int : %ld \n", sizeof(int));
printf("Storage size for float : %ld \n", sizeof(float));
printf("Minimum float positive value : %E \n", FLT_MIN);
printf("Maximum float positive value : %E \n", FLT_MAX);
printf("Precision value : %d \n", FLT_DIG);
return (0);
}
