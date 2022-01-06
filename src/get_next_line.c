/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccurie <ccurie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:15:58 by ccurie            #+#    #+#             */
/*   Updated: 2022/01/06 15:32:54 by ccurie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "stdio.h"
#include "unistd.h"
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	char	*buf;

	i = 0;
	buf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	i = read(fd, buf, 10);
	if (-1 == i)
		return (NULL);
	buf[11] = '\0';
	ft_putstr(buf);
	return (buf);
}

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;
	char	*str;

	fd = 0;
	i = 0;
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (-1 == fd)
			return (-1);
	}
	while (i < 3)
	{
		str = get_next_line(fd);
		ft_putstr(str);
		i++;
	}
	return (0);
}
