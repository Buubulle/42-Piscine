/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:22 by ahalleux          #+#    #+#             */
/*   Updated: 2022/02/20 17:43:43 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		comp;
	int		resultat;

	i = 0;
	comp = 1;
	resultat = 0;
	while ((str[i] == ' ') || (str[i] == '\r') || (str[i] == '\t')
		|| (str[i] == '\n' || (str[i] == '\v') || (str[i] == '\f')))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			comp *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = (str[i] - '0') + (resultat * 10);
		i++;
	}
	return (resultat * comp);
}
