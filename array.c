/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:41:34 by shdorsh           #+#    #+#             */
/*   Updated: 2024/08/08 00:38:26 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_foreach(void **array, void (*fn)(void *array))
{
	while (*array)
	{
		fn(*array);
		array++;
	}
}

void	array_order(int **array, int array_size)
{
	int	i;
	int	j;
	int	inter;

	i = 0;
	while (i < array_size)
	{
		j = i + 1;
		while (j < array_size)
		{
			if (array[i] < array[j])
			{
				inter = array[i];
				array[i] = array[j];
				array[j] = inter;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
void print_element(void *element) {
    printf("%s\n", (char *)element);
}

int main(void) {
    char *array[] = {
        "Hello",
        "World",
        "This",
        "Is",
        "A",
        "Test",
        NULL
    };

    Array myArray = new_array();

    myArray.foreach((void **)array, print_element);

    return 0;
}
*/
