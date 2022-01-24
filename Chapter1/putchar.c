#include <stdio.h>

/* copy input to output */

int	main()
{
	char	c;

	while ((c = getchar()) != EOF)
	{
		printf("%d", c != EOF);
		putchar(c);
	}
}