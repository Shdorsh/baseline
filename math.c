int	math_power(int base, int power)
{
	while (power)
	{
		base *= base;
		power--;
	}
	return (base);
}

int	math_factorial(int base)
{
	int	i;

	i = 1;
	while (base > 1)
	{
		i *= base;
		base--;
	}
	return (base);
}

int	math_min(int array[])
{
	int	result;
	int	i;

	result = array[0];
	while (array[i])
	{
		if (result > array[i])
		{
			result = array[i];
		}
		i++;
	}
	return (result);
}

int	math_max(int array[])
{
	int	result;
	int	i;

	result = array[0];
	while (array[i])
	{
		if (result < array[i])
		{
			result = array[i];
		}
		i++;
	}
	return (result);
}

int	math_clamp(int number, int min, int max) {
	if (number < min)
	{
		return (min);
	}
	else if (number > max)
	{
		return (max);
	}
	return (number);
}

struct Math {
	int (*power)(int base, int power);
	int (*factorial)(int base);
	int (*min)(int array[]);
	int (*max)(int array[]);
	int (*clamp)(int number, int min, int max);
};

struct Math new_math(void)
{
	struct Math	mth;

	mth.power = math_power;
	mth.factorial = math_factorial;
	mth.min = math_min;
	mth.max = math_max;
	mth.clamp = math_clamp;
	return (mth);
}
/*
#include <stdio.h>
int main(void)
{
	struct Math Math = new_math();
	printf("Clamp: %i", Math.clamp(-10, -5, 10));
}
*/