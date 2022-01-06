/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccurie <ccurie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:15:58 by ccurie            #+#    #+#             */
/*   Updated: 2022/01/06 17:27:35 by ccurie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	int		size;
	char	*buf;

	i = 0;
	size = 0;
	buf = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	size = read(fd, &(buf[i]), 1);
	while (i < BUFFER_SIZE && buf[i] != '\n')
	{
		i++;
		size = read(fd, &(buf[i]), 1);
		if (-1 == i)
		{
			free(buf);
			return (NULL);
		}
	}
	buf[i] = '\0';
	return (buf);
}

// int	main(int argc, char *argv[])
// {
// 	int		fd;
// 	int		i;
// 	char	*str;

// 	fd = 0;
// 	i = 0;
// 	if (argc > 1)
// 	{
// 		fd = open(argv[1], O_RDONLY);
// 		if (-1 == fd)
// 			return (-1);
// 	}
// 	while (i < 3)
// 	{
// 		str = get_next_line(fd);
// 		ft_putstr(str);
// 		i++;
// 	}
// 	close(fd);
// 	return (0);
// }
