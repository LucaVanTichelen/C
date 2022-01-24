#include <stdio.h>

#define	LOWER	0		/* lower limit of the table */
#define	UPPER	300		/* upper limit */
#define	STEP	20		/* step size */

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */

int	main()
{
	int fahr;

	printf("\nFahrenheit to Celsius conversion table:\n\n");

	printf("\t°F\t   °C\n");
	printf("\t---\t   ---\n");

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("\t%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
	}
}