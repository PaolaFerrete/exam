/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:37:48 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/06 11:37:51 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(int c)
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

void	rev_print(char *str)
{
	int i;

	i = 0;
	i = ft_strlen(str);
	while (--i >= 0)
	{
		ft_putchar(str[i]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	ft_putchar('\n');
}
