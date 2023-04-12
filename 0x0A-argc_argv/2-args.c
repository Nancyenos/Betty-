#include "main.h"
#include <stdio.h>
/**
 * main - prints arguments
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
