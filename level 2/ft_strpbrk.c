/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:09:31 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/11 14:36:20 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int				i;
	int 			j;
	const char		*p;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				p = &s1[i];
				return ((char *) p);
			}
			j++;
		}
		i++;
	}
	return (0);
}

