/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:41:55 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/05 15:03:39 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int n)
{

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n == 0)
		ft_putchr(n + 48);
	else if (n < 0)
	{
		ft_putchr('-');
		n *= -1;
		ft_putnbr(n);
	}
	else if (n < 10)
		ft_putchr(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putchr((char)(n % 10 + 48));
	}
}


int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "FizzBuzz", 9);
		else if (i % 3 == 0)
			write(1, "Fizz", 5);
		else if (i % 5 == 0)
			write(1, "Buzz", 5);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}
