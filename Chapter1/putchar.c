#include <stdio.h>

/* copy input to output */

int	main()
{
	char	c;

    c = 0;
	while (c != EOF)
	{
        c = getchar();
		printf("%d", c);
		putchar(c);
	}
}
