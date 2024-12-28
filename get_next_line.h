/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:12:18 by authomas          #+#    #+#             */
/*   Updated: 2024/12/28 15:54:06 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# if BUFFER_SIZE < 1
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# if BUFFER_SIZE > 2147483647
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 2147483647
# endif

# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);

#endif
