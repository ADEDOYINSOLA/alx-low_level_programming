#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Determines if a number is a positive or negative
 * Return: always 0
 */
int main(void)
{
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
