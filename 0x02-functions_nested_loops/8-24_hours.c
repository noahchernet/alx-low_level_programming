#include "main.h"
/**
 * jack_bauer - Prints every minute of the day starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr; /* The hour handle of the counter */
	int min; /* The minute handle of the counter */

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(48 + (hr / 10) % 10);
			_putchar(48 + hr % 10);
			_putchar(58);
			_putchar(48 + (min / 10) % 10);
			_putchar(48 + min % 10);
			_putchar(10);
		}
	}
}
