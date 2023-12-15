/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:27:08 by user              #+#    #+#             */
/*   Updated: 2023/09/06 17:04:41 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*string;
	int		i;

	string = (char *)str;
	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)c)
			return (&string[i]);
		i--;
	}
	return (NULL);
}
