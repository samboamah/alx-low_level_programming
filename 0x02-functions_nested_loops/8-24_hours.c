#include "main.h"

/**
 * jack_bauer - prints all the minutes of the day of Jack Bauer
 * starts from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hours, h, hmod, mins, m1, m2;

	for (hours = 0; hours < 24; ++hours)
	{
		h = hours / 10;
		hmod = hours % 10;
		for (mins = 0; mins <= 59; ++mins)
		{
			m1 = mins / 10;
			m2 = mins % 10;
			_putchar(h + '0');
			_putchar(hmod + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar(10);
		}
		mins = 0;
	}
}
