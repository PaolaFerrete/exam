/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:33:24 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/11 12:09:04 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);

}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchr(str[i]);
		i++;
	}
}

static int	ft_count_num(int num)
{
	int	numdig;

	numdig = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
		numdig += 1;
	while (num != 0)
	{
		num /= 10;
		numdig++;
	}
	return (numdig);
}

static char	*ft_copy(char *s, long num, int size)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
		i++;
	}
	if (num == 0)
	{
		s[i] = 48;
		i++;
	}
	while (num != 0)
	{
		s[size - 1] = num % 10 + 48;
		num = num / 10;
		size--;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		numdig;
	long	num;

	numdig = ft_count_num(n);
	num = n;
	s = malloc(sizeof(char) * (numdig + 1));
	if (!s)
		return (NULL);
	s = ft_copy(s, num, numdig);
	return (s);
}

int	ft_calculo (int first, int second, char *str)
{
	int i;

	i = 0;

	if (str[i] == '+')
		return (first + second);
	else if (str[i] == '-')
		return (first - second);
	else if (str[i] == '*')
		return (first * second);
	else if (str[i] == '/')
		return (first / second);
	else if (str[i] == '%')
		return (first % second);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n *= 10;
		n += nptr[i] - 48;
		i++;
	}
	return (n * sign);
}


int	main(int ac, char **av)
{
	int first;
	int	second;
	int calculo;
	char *string;

	if (ac == 4)
	{
		first = ft_atoi(av[1]);
		second = ft_atoi(av[3]);
		calculo = ft_calculo(first, second, av[2]);
		string = ft_itoa(calculo);
		ft_putstr(string);

	}
	ft_putchr('\n');

}
