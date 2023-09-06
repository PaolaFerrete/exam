/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:00:17 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/06 12:21:12 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_replace(char *str, int i, char *replace)
{
	int	j;

	j = 0;
	if (ft_strlen(replace) == 1)
	{
		while (str[j])
		{
			if (j == i)
				ft_putchr(*replace);
			else
				ft_putchr(str[j]);
			j++;
		}
	}
}
void	ft_search(char *str, char *search, char *replace)
{
	int	i;

	if (ft_strlen(search) == 1)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == search[0])
				ft_replace(str, i, replace);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_search(av[1], av[2], av[3]);
	ft_putchr('\n');
}
