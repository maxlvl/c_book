#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main()
{
	int fahr, celsius, i;
	int lower, upper, step;

	lower = 0;		/*lower limit of temp table */
	upper = 300;	/*upper limit */
	step = 20;		/* step size */

	fahr = lower;
	printf("Fahrenheit to Celsius\n");
	for (i = 0; i < 20; i++) {
		printf("-");
	}
	printf("\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}

	int new_celsius, new_fahr;

	new_celsius = lower;

	printf("Celsius to Fahrenheit\n");
	for (i = 0; i < 20; i++) {
		printf("-");
	}
	printf("\n");
	while (new_celsius <= upper) {
		new_fahr = (9 * new_celsius / 5) + 32;
		printf("%d %6d\n", new_celsius, new_fahr);
		new_celsius = new_celsius + step;
	}
}
