/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:25:41 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/05 15:44:54 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s2 == NULL)
		return(0);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
int	main(void)
{
	char	result[255];
	char	*s1=NULL;
	char	*s2="oioioi";

	s1 = result;
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));

	s2 = "tchau";
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));

	s2 = " ";
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));

	s2 = "\0";
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));
}
*/
