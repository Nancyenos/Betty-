#include "main.h"
/**
 *print_most_numbers - prints 0 to 9 except 2 &4
 *Return: void
 *@i: parameter
 *
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	{
		_putchar('\n');
	}
}
