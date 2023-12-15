/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:54:07 by user              #+#    #+#             */
/*   Updated: 2023/09/06 17:04:41 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_abs(long long nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	len = ft_int_len(n);
	str = ft_strnew(len);
	sign = 0;
	if (n < 0)
		sign = 1;
	if (!str)
		return (NULL);
	nbr = ft_abs(n);
	while (len--)
	{
		str[len] = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
