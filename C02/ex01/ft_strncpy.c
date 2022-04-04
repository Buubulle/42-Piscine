/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:50:49 by ahalleux          #+#    #+#             */
/*   Updated: 2022/02/14 10:11:12 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int c)
{
	unsigned int	a;

	a = 0;
	while (a < c && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < c)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
