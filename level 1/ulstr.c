/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:14:51 by paola             #+#    #+#             */
/*   Updated: 2023/09/06 20:32:07 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchr(str[i] + 32);
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchr(str[i] - 32);
		else
			ft_putchr(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	ft_putchr('\n');
}
