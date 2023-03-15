/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:35:34 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:23:49 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include "../libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		get_len(const char *str);

char	*get_next_line(int fd);
char	*get_line(char const *s, char c);
char	*join_to_stash(char *s1, char const *s2, int len);

#endif
