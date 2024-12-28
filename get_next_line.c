/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:12:14 by authomas          #+#    #+#             */
/*   Updated: 2024/12/28 15:56:24 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*read_line[BUFFER_SIZE];
	char		*line; //je le malloc quand??????
	static char	*buff[BUFFER_SIZE];

	read(fd, read_line, BUFFER_SIZE);
	if (ft_strchr(read_line, '\n'))
	{
		line = malloc(sizeof(char) * (ft_strchr(read_line, '\n') - read_line));
		// STRLCPY TO LINE :DDDDDD
		//
	}
	return (line);
}
