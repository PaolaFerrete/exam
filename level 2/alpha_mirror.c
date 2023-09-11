/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:28:33 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/11 11:00:10 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchr('Z' - str[i] + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchr('z' - str[i] + 'a');
		else
			ft_putchr(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		alpha_mirror(av[1]);
	}
	ft_putchr('\n');

}
