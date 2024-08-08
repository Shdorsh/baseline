/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:54:27 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 01:08:55 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

void			string_assign(char *dest, char *src);
unsigned int	string_size(char *array);
unsigned int	string_buffer(char *array);
void			string_to_uppercase(char *string);
void			string_to_lowercase(char *string);

#endif