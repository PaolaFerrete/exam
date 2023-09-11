/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:34:09 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/11 15:18:21 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = -1;
	j = ft_strlen(str);
	while (++i < j / 2)
	{
		temp = str[i];
		str[i] = str[j - 1 - i];
		str[j - 1 - i] = temp;
	}
	return (str);
}

int	main(void)
{
	char	*s = "12345";

	ft_strrev(s);
	//char	*s2 = "1234";

	//printf("%s\n", ft_strrev(s));
	//printf("%s\n", ft_strrev(s2));
}
