/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:12:14 by authomas          #+#    #+#             */
/*   Updated: 2025/01/02 20:21:13 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		temp_line[BUFFER_SIZE];
	size_t		len;
	char		*line;
	static char	buff[BUFFER_SIZE] = "";

	read(fd, temp_line, BUFFER_SIZE);
	len = temp_line - ft_strchr(temp_line, '\n');
	while (!ft_strchr(temp_line, '\n'))
	{
		
	}
	if (ft_strchr(temp_line, '\n'))
	{
		
	}
	return (line);
}
