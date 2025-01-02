/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:12:14 by authomas          #+#    #+#             */
/*   Updated: 2024/12/29 16:06:51 by authomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		read_line[BUFFER_SIZE];
	size_t		len;
	char		*line;
	static char	buff[BUFFER_SIZE] = "";

	read(fd, read_line, BUFFER_SIZE);
	len = read_line - ft_strchr(read_line, '\n');
	while (!ft_strchr(read_line, '\n'))
	{
		
	}
	if (ft_strchr(read_line, '\n'))
	{
		
	}
	return (line);
}
