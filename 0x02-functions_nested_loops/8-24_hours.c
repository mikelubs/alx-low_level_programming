#include "main.h"
/**
 * jack_bauer - print jack bauer clock
 * Description: from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int t = 0;
	int p = 0, q = 0, r = 0, s = 0;

	while (t < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		s++;
		if (s > 9)
		{
			s = 0;
			r++;
		}
		if (r > 5)
		{
			r = 0;
			r++;
		}
		if (q > 9)
		{
			q = 0;
			q++;
		}
		t++;
	}
}
