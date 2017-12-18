/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robihaap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:31:31 by robihaap          #+#    #+#             */
/*   Updated: 2017/11/07 17:09:23 by robihaap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display_file(char *file)
{
	int		fd;
	char	buf[4046];
	int		len;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fd, buf, 4095)))
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_display_file(av[1]);
	else if (ac <= 1)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
}
