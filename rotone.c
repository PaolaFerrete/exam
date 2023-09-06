/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:45:10 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/06 11:54:59 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar((str[i] - 'A' + 1) % 26 + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar((str[i] - 'a' + 1) % 26 + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
}
