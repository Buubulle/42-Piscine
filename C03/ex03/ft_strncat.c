/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:49:01 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/07 10:06:32 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;	
	unsigned int		c;

	i = 0;
	c = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (c < nb && *(src + c) != '\0')
	{
		*(dest + i + c) = *(src + c);
		c++;
	}
	*(dest + i + c) = '\0';
	return (dest);
}
