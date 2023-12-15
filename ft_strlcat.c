/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftower-p <ftower-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:57:53 by ftower-p          #+#    #+#             */
/*   Updated: 2023/09/06 17:04:41 by ftower-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		dest_len;
	size_t		result_len;
	const char	*s;

	s = src;
	dest_len = 0;
	if ((!dest || !src) && !n)
		return (0);
	while (dest[dest_len] && dest_len < n)
		dest_len++;
	if (dest_len < n)
		result_len = dest_len + ft_strlen(s);
	else
		return (n + ft_strlen(s));
	while (*s && (dest_len + 1) < n)
	{
		dest[dest_len] = *s++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (result_len);
}
