#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random_pwd;
	int c; /* count */
	int t; /* total */

	srand(time(NULL));
	for (c = 0, t = 2772; t > 122; c++)
	{
		random_pwd = (rand() % 125) + 1;
		printf("%c", random_pwd);
		t -= random_pwd;
	}
	printf("%c", t);

	return (0);
}
