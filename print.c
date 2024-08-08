/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 01:10:43 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 01:13:32 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	println(char *string)
{
	int	size;

	size = 0;
	while (string[size])
	{
		size++;
	}
	write(STDOUT_FILENO, string, size);
	write(STDOUT_FILENO, "\n", 1);
}
