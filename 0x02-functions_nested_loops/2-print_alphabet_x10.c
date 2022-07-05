#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0.
 */
void main(void)
{
	int alphabet;
	int count;


	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}

}
