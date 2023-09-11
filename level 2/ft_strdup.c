/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:51:06 by pferrete          #+#    #+#             */
/*   Updated: 2023/09/11 14:01:15 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include <string.h>
//# include <stdio.h>
# include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int	i;

	i = 0;
	if (src == NULL)
		return NULL;
	p = malloc(sizeof(p) * sizeof(src) + 1);
	if (p == NULL)
		return NULL;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
