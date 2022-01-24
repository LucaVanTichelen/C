#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = 0, 20, ..., 300; floating-point version */

int	main()
{
	float	celsius, fahr;
	int		lower, upper, step;

	lower = -100;		/* lower limit of temperature table */
	upper = 200;	/* upper limit */
	step = 20;		/* step size */

	printf("\nCelsius to Fahrenheit conversion table:\n\n");

	printf("  °C\t °F\n");
	printf("----   ----\n");

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = celsius * 9.0/5.0 + 32.0;
		printf("%4.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}