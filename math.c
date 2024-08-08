/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:42:37 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/07 23:54:04 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	math_clamp(int number, int min, int max)
{
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
