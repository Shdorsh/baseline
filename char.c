/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:41:00 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 01:05:20 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	char_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	char_is_lowercase_letter(char c)
{
	return (c >= 'a' && c <= 'z');
}

void	char_to_uppercase_letter(char *c)
{
	if (char_is_lowercase_letter(*c))
	{
		*c -= 32;
	}
}

int	char_is_uppercase_letter(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	char_to_lowercase_letter(char *c)
{
	if (char_is_uppercase_letter(*c))
	{
		*c += 32;
	}
}

int	char_is_letter(char c)
{
	return (char_is_lowercase_letter(c) || char_is_uppercase_letter(c));
}

int	char_is_unprintable(char c)
{
	return (c < 32 || c > 126);
}
