#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: Starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int y = 48;
	int a = 48, b = 48, c = 48, d = 48;

	while (y < 1440)
	{
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		_putchar('\n');
		d++;
		if (d > 57)
		{
			d = 48;
			c++;
		}
		if (c > 53)
		{
			c = 48;
			b++;
		}
		if (b > 57)
		{
			b = 48;
			a++;
		}
		y++;
	}
}

