/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:02:25 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/11 11:22:59 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}

void	camel_to_snack(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchr('_');
			ft_putchr(str[i] + 32);
		}
		else
			ft_putchr(str[i]);
		i++;

	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		camel_to_snack(av[1]);
	ft_putchr('\n');
}
