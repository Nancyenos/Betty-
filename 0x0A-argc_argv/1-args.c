#include "main.h"
#include <stdio.h>
/**
 * main - prints count of arguments
 * @argc: parameter
 * @argv: parameter
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	(void) argv;/*|gnore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
