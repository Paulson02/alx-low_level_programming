#include <stdio.h>
#include <stdlib.h>
#include <time.h>
*/
int main(void)
{
	int p, q;
	
	for (p = 0; p <= 98; p++)
	{
		putchar((p / 10) + '0');
		putchar((p % 10) + '0');
		putchar(' ');
		putchar((q / 10) + '0');
		putchar((q % 10) + '0');

		if (p == 98 && q == 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
