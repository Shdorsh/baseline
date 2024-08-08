/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slice.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 00:43:48 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 00:55:24 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "slice.h"
#include <stdlib.h>
#include <unistd.h>

t_slice	new_slice(char *string, int start, int end)
{
	t_slice	result;

	result.string = string;
	result.start = start;
	result.end = end;
}

void	print_slice(t_slice slice)
{
	write(STDOUT_FILENO, slice.string, slice.end - slice.start);
}

char	*slice_to_string(t_slice slice)
{
	char	*result;
	int		i;

	result = (char *)malloc((1 + slice.end - slice.start) * sizeof (char));
	i = 0;
	while (slice.start + i <= slice.end)
	{
		result[i] = slice.string[slice.start + i];
		i++;
	}
	return (result);
}
