/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:34:01 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:21:36 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;

	pdest = (char *)dest;
	psrc = (char *)src;
	if (psrc < pdest)
	{
		while (n--)
		{
			pdest[n] = psrc[n];
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (dest);
}
