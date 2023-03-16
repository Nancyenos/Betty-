#include <stdio.h>

/**
 * main - main function
 * Return: return 0 on success
 */

int main(void)
{
       	printf("Size of a  char: %lu\n", sizeof(char));
       	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu", sizeof(float));
	return (0);
}
