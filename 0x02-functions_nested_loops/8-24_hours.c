#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - a function hat prints every minute
 *  of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 *  Return: 0 always Sucess.
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
		printf("00:00\n");
		while (a <= 24)
		{
			while (b <= 60)
			{
				b++;
				if (b > 59)
				{
					a++;
					b = 0;
				}
				while  (a == 24)
				{
					a = 0;
				}
				while (a == 0 && b == 0)
				{
					exit(EXIT_FAILURE);
				}
				printf ("%02d:%02d\n", a, b);
			}
		}
}


