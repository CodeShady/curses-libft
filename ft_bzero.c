/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftower-p <ftower-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:45:31 by ftower-p          #+#    #+#             */
/*   Updated: 2023/09/06 17:04:41 by ftower-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t count)
{
	char	*str;
	int		index;

	index = 0;
	str = pointer;
	while (count > 0)
	{
		str[index] = 0;
		count--;
		index++;
	}
}
