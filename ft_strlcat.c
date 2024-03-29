/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:02:52 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:21:03 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	destsize;
	unsigned int	srcsize;
	unsigned int	result;

	i = 0;
	if (!dest)
		destsize = 0;
	else
		destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (!size)
		return (ft_strlen(src));
	else if (size > destsize)
		result = destsize + srcsize;
	else
		result = srcsize + size;
	while (src[i] && (destsize + 1) < size)
		dest[destsize++] = src[i++];
	dest[destsize] = '\0';
	return (result);
}
