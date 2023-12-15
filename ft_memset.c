/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftower-p <ftower-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:31:19 by ftower-p          #+#    #+#             */
/*   Updated: 2023/09/06 17:04:41 by ftower-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int character, size_t count)
{
	char	*str;
	int		index;

	str = pointer;
	index = 0;
	while (count > 0)
	{
		str[index] = character;
		count--;
		index++;
	}
	return (pointer);
}
