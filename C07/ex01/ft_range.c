/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:13:09 by ahalleux          #+#    #+#             */
/*   Updated: 2022/02/23 16:39:39 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		tmp;
	int		i;

	tmp = min;
	i = max - min;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) *(i + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (tmp + i < max)
	{
		tab[i] = tmp + i;
		i++;
	}
	return (tab);
}
