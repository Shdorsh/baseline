/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 03:58:19 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/07 23:53:53 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

int	math_power(int base, int power);
int	math_factorial(int base);
int	math_min(int array[]);
int	math_max(int array[]);
int	math_clamp(int number, int min, int max);

#endif