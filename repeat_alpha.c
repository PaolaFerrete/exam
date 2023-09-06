/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:01:54 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/05 16:14:56 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}


void	repeat_alpha(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			j = (str[i] + 1 - 65);
		else if (str[i] >= 97 && str[i] <= 122)
			j = (str[i] + 1 - 97);
		else
			j = 1;
		while (j > 0)
		{
			ft_putchar(str[i]);
			j--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
}
