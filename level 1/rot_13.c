/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:16:23 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/06 11:36:13 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar((str[i] - 'A' + 13) % 26 + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar((str[i] - 'a' + 13) % 26 + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	ft_putchar('\n');
}
