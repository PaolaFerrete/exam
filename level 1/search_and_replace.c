/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:00:17 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/06 20:12:09 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	search_replace(char *str, char *search, char *replace)
{
	int	i;

	if (ft_strlen(search) == 1 && ft_strlen(replace) == 1)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == search[0])
			{
				str[i] = replace[0];
				ft_putchr(str[i]);
			}
			else
				ft_putchr(str[i]);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		search_replace(av[1], av[2], av[3]);
	}
	ft_putchr('\n');
	return (0);
}
