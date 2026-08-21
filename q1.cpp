#include<stdio.h>

int main()
{
	float C;
	float F;
	printf("The temperature in Celscius:");
	scanf("%f",&C);
	F = (9.00 / 5.00 * C) + 32;
	printf("The temperature in Fahrenheit: %.2f", F);
}
