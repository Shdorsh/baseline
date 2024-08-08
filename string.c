/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:54:27 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 01:08:09 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

void	string_assign(char *dest, char *src)
{
	while (*src && *dest)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*dest)
	{
		*dest = 0;
		dest++;
	}
}

unsigned int	string_size(char *string)
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

unsigned int	string_buffer(char *string)
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	while (!string[i])
	{
		i++;
	}
	return (i - 1);
}

void	string_to_uppercase(char *string)
{
	while (*string)
	{
		char_to_lowercase_letter(string);
		*string++;
	}
}

void	string_to_lowercase(char *string)
{
	while (*string)
	{
		char_to_uppercase_letter(string);
		*string++;
	}
}
