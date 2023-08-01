#include "main.h"
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
				if (a > 23)
				{
					a = 0;
				}
			
			}
			printf ("%d:%d\n",a ,b);	
				if (a == 10 && b == 0)
				{
					break;
				}
		}

}

