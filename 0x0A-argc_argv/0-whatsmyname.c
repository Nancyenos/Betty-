#include <stdio.h>
#include "main.h"
/**
 * main - a funtion that prints its name
 * @argc: parameter
 * @argv: parameter
 * Return: always 0 on success
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
