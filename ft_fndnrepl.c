/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fndnrepl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:53:27 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/26 16:35:15 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_before_replace(const char *find_str, const char *replace_word)
{
	int	i;

	i = 0;
	while (ft_strncmp(find_str + i, replace_word, ft_strlen(replace_word)) && \
			i <= ft_strlen(find_str))
		i++;
	return (++i);
}

char	*ft_fndnrepl(const char *find_str, char *replace_word, \
							char *replace_value)
{
	char	*before_str;
	char	*str;
	char	*after_str;
	char	*temp_str;

	if (!find_str || !replace_word || !replace_value)
		return (0);
	before_str = ft_calloc(ft_strlen(find_str) - ft_strlen(replace_word) + \
							ft_strlen(replace_value) + 1, sizeof(char));
	if (!before_str)
		return (0);
	after_str = NULL;
	ft_strlcpy(before_str, find_str, \
	len_before_replace(find_str, replace_word));
	temp_str = (char *)find_str + len_before_replace(find_str, replace_word);
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
