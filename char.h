/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:45:02 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 01:04:59 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H

int		char_is_num(char c);
int		char_is_lowercase_letter(char c);
void	char_to_lowercase_letter(char *c);
int		char_is_uppercase_letter(char c);
void	char_to_uppercase_letter(char *c);
int		char_is_letter(char c);
int		char_is_unprintable(char c);

#endif