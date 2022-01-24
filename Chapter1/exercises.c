#include <stdio.h>

/* copy input to output */

int	main()
{
	int	c, i;

    c = getchar();
	while (c != EOF)
	{
        i = 0;
        putchar(c);
        while ((c = getchar()) == ' ')
            ++i;
        if (i > 0)
            putchar(' ');
	}
}
