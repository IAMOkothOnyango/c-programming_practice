#include <stdio.h>
#include <stdlib.h>

/*Print Fahrenheit Celcius table for fahr = 0, 20, ..., 300*/

int main()
{
	float fahr, celcius;
	int lowerLimit, upperLimit, stepSize;

	lowerLimit = 0; /*lower limit of temperature table*/
	upperLimit = 300; /*upper limit of temperature table*/
	stepSize = 20; /*step size*/

	printf("Hey! Here's your Fahrenheit Celcius Table!\n\n");
	printf("Fahrenheit \t Celcius\n\n");

	fahr = lowerLimit;

	while (fahr <= upperLimit)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f \t\t %6.1f\n", fahr, celcius);
		fahr = fahr + stepSize;
	}

	return 0;
}
