#include <stdlib.h>
#include <stdio.h>

char *convert(int number, char *base)
{
	char	*result;
	int	initial_number;
	int	base_size;
	int	highest_digit;

	initial_number = number;
	base_size = 0;
	highest_digit = 0;
	while (base[base_size])
	{

		base_size++;
	}
	while (number)
	{
		number /= base_size;
		highest_digit++;
	}
	result = (char *) malloc(sizeof (char) * highest_digit);
	while (highest_digit)
	{
		result[highest_digit - 1] = base[(initial_number / (base_size * highest_digit) % base_size)];
		highest_digit--;
	}
	return (result);
}

int	main(void)
{
	printf("test: %s", convert(1, "01"));
}