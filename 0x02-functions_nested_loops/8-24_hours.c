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
		_putchar(p + '0');
		_putchar(q + '0');
		_putchar(':');
		_putchar(r + '0');
		_putchar(s + '0');
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
			q++;
		}
		if (q > 9)
		{
			q = 0;
			p++;
		}
		t++;
	}
}
