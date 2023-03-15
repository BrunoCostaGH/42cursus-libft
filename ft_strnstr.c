/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:45:47 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:20:52 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	while ((size_t)ft_strlen(little) <= len--)
	{
		if (ft_strncmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
