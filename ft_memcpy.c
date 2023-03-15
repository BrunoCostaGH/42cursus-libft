/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:04:55 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:21:41 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	int				i;

	i = 0;
	if (!src && !dest)
		return (dest);
	pdest = dest;
	while (n--)
	{
		pdest[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
