/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:36:01 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:20:50 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = ft_strlen(s);
	str = (char *)s;
	while (str[i] != c && i >= 0)
		i--;
	if (str[i] == c)
		return (str + i);
	return (0);
}
