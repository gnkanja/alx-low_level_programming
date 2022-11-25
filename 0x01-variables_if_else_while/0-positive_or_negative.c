#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: checks whether n is positive, negative or equals to zero
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("%d is positive\n", n);
	
	else if(n < 0)
		printf("%d is negtive\n", n);
	
	else if(n == 0)
		printf("%d is zero\n", n);
	
	return (0);
}
