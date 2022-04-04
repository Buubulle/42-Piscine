/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:55:16 by ahalleux          #+#    #+#             */
/*   Updated: 2022/02/22 10:35:47 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		temp;
	int		i;
	int		*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = max - min;
	tab = malloc(temp * sizeof(int));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < temp)
	{
		tab[i] = min + i;
		i++;
	}
	return (temp);
}
