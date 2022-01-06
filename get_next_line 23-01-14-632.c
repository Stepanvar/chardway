/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccurie <ccurie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:15:58 by ccurie            #+#    #+#             */
/*   Updated: 2022/01/06 20:50:54 by ccurie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "get_next_line.h"

char	**ft_onesplit(char **buf, char c)
{
	buf[1] = ft_substr(buf[0], ft_strchr(buf[0], c) - buf[0],
			ft_strlen(buf[0]));
	return (buf);
}

char	*get_next_line(int fd)
{
	static int		i = 0;
	int				size;
	static char		**buf;

	if (0 == i)
	{
		size = 0;
		buf = (char **)malloc((BUFFER_SIZE + 1) * 2);
		size = read(fd, buf[0], BUFFER_SIZE);
		if (-1 == size)
			return (NULL);
		buf[0][size + 1] = '\0';
		buf = ft_onesplit(buf, '\n');
		i++;
	}
	else if (!buf[i])
		return (buf[i]);
	else
		i = 0;
	return (buf[i]);
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
	str = get_next_line(fd);
	ft_putstr(str);
	while (str)
	{
		str = get_next_line(fd);
		ft_putstr(str);
	}
	i++;
	close(fd);
	return (0);
}
