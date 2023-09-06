/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:21:54 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/05 13:57:56 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		printf("ac >= 2\n");
		i = 0;
		while (av[1][i] <= 32 && av[1][i])
		{
			printf("%c", av[1][i]);
			i++;
		}
		while(av[1][i] > 32 && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	printf("passou direto");
	write(1, "\n", 1);
}
