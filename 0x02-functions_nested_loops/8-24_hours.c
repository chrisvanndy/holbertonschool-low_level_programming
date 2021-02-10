#include "holberton.h"

/**
 * jack_bauer - function lists hours of day min by min
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour1, hour0, min1, min0;

	hour1 = 0;
	for (; hour1 <= 2; hour1++)
	{
		hour0 = 0;
		for (; hour0 <= 9; hour0++)
		{
		if (hour1 == 2 && hour0 == 4)
		break;
			min1 = 0;
			for (; min1 <= 5; min1++)
			{
				min0 = 0;
				for (; min0 <= 9; min0++)
				{
				_putchar(hour1 + '0');
				_putchar(hour0 + '0');
				_putchar(':');
				_putchar(min1 + '0');
				_putchar(min0 + '0');
				_putchar('\n');
				}
			}
		}
	}
}
