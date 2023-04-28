/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fndnrepl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:53:27 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/04/28 20:56:57 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fndnrepl(const char *find_str, char *replace_word, \
							char *replace_value)
{
	int		str_pos;
	char	*before_str;
	char	*str;
	char	*after_str;
	char	*temp_str;

	str_pos = 1;
	after_str = NULL;
	before_str = ft_calloc(ft_strlen(find_str) - ft_strlen(replace_word) + \
							ft_strlen(replace_value), sizeof(char));
	str = ft_strnstr(find_str, replace_word, ft_strlen(find_str));
	temp_str = (char *)find_str;
	while (temp_str && temp_str++ != str)
		str_pos++;
	ft_strlcpy(before_str, find_str, str_pos);
	if (ft_strlen(temp_str) >= ft_strlen(replace_word))
		after_str = temp_str + (ft_strlen(replace_word) - 1);
	temp_str = ft_strjoin(before_str, replace_value);
	if (after_str)
		str = ft_strjoin(temp_str, after_str);
	else
		str = ft_strdup(temp_str);
	free(before_str);
	free(temp_str);
	return (str);
}
