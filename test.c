int	min(int a, int b)
{
	if (a < b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

void	sqrt_segmentation(int nb, int *min, int *max)
{
	int power_of_ten;

	power_of_ten = 0;
	while (nb > 0)
	{
		nb /= 10;
		power_of_ten++;
	}
	power_of_ten = power_of_ten >> 1;
	nb = 1;
	while (power_of_ten > 0)
	{
		nb *= 10;
		power_of_ten -= 1;
	}
	*min = nb / 10;
	*max = nb * 10;
}

void	grug_segmentation(int nb, int *min, int *max)
{
	*min = 2;
	*max = nb;
}


int	binary_search(int nb, int min, int max)
{
    int middle;

    while (min <= max)
    {
        middle = (min + max) >> 1;
        int square = middle * middle;

        if (square == nb)
        {
            return middle;
        }
        else if (square < nb)
        {
            min = middle + 1;
        }
        else
        {
            max = middle - 1;
        }
    }
    return (0);
}

int	grug_search(int nb, int min, int max)
{
	while (min <= max)
	{
		if (nb == min * min)
			return (min);
		min++;
	}
	return (0);
}

int	homemade_sqrt(int nb)
{
	int min_segment;
	int max_segment;

	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	sqrt_segmentation(nb, &min_segment, &max_segment);
	max_segment = min(nb / 2, 46340);
	return (binary_search(nb, min_segment, max_segment));
}

#include <stdio.h>
void	test(int nb)
{
    printf("Pure int square root of %i: %i\n", nb, homemade_sqrt(nb));
}

int	main(void) {
	int	i;

	i = 0;
	while (i < 100)
	{
		test(5);
		test(8);
		test(9);
		test(27);
		test(55);
		test(81);
		test(121);
		test(15438593);
		test(2147395600);
		test(1);
		test(2);
		test(4);
		test(16);
		test(25);
		test(49);
		test(101);
		test(1000);
		test(10000);
		test(1000000);
		test(10000000);
		test(2147483647);
		i++;
	}
	return 0;
}