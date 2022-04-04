/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:15:53 by ahalleux          #+#    #+#             */
/*   Updated: 2022/02/07 15:37:33 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		nbr1;
	int		nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_putchar(nbr1 / 10 + '0');
			ft_putchar(nbr1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nbr2 / 10 + '0');
			ft_putchar(nbr2 % 10 + '0');
			if (nbr1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
}
