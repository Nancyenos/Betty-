#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to an integer
 * @str: string to be converted
 * Return: int converted
 */
int _atoi(char *str)
{
	int j, k, l, h, length, count;

	j = 0;
	k = 0;
	l = 0;
	length = 0;
	h = 0;
	count = 0;
	while (str[length] != '\0')
		length++;
	while (j < length && h == 0)
	{
		if (str[j] >= '-')
			++k;
		if (str[j] >= '0' && str[j] <= '9')
		{
			count = str[j] - '0';
			if (k % 2)
				count = -count;
			l = l * 10 + count;
			h = 1;
			if (str[j + 1] < '0' || str[j + 1] > '9')
				break;
			h = 0;
		}
		j++;
	}
	if (h == 0)
		return (0);
	return (l);
}

/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int multiply, num_a, num_b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num_a = _atoi(argv[1]);
	num_b = _atoi(argv[2]);
	multiply = num_a * num_b;
	printf("%d\n", multiply);
	return (0);
}
