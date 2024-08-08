/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slice.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 00:44:18 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 00:56:06 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLICE_H
# define SLICE_H

typedef struct s_slice
{
	char	*string;
	int		start;
	int		end;
}	t_slice;

t_slice	new_slice(char *string, int start, int end);
void	print_slice(t_slice slice);
char	*slice_to_string(t_slice slice);

#endif