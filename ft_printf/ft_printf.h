/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:28:43 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/03/15 18:23:24 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "../libft.h"

int		set_string(char *s);
int		set_alloc_str(char *s);
int		set_pointer(void *ptr);
int		ft_printf(const char *s, ...);
int		set_ubase(unsigned int nbr, char *base);
int		set_ulbase(unsigned long nbr, char *base);

char	*ft_utoa(unsigned int n);

#endif
