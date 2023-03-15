/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:59:20 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:21:46 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	int				i;

	str = (unsigned char *)s;
	ch = c;
	i = 0;
	while (n--)
	{
		if (*str++ == ch)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
