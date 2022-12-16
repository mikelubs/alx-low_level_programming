#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int c, i;

	c = 0; /* keep count to 10 */
	while (c < 10)
	{
		i = 0;
		while (i < 15) /* run form 0 to 14 */
		{
			if (i > 9)
				_putchar(i / 10 + '0'); /* only print 1 if i > 9 */

			_putchar(i % 10 + '0'); /* print rem after div */
			i++;
		}
		c++;
		_putchar('\n');
	}
}
