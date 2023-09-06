/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:45:34 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/05 15:49:48 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*s = "oioioi";
	char	*s2 = "";
	char	*s3 = "hajdiiakkakakakakakakkakdakdhiwuqryhbdgbsjgweituwetpwetuwtpweutpeuwptwetuweptuptuw";


	printf("%d\n", ft_strlen(s));
	printf("%d\n", ft_strlen(s2));
	printf("%d\n", ft_strlen(s3));
}
*/
