/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:30:13 by tnoyan            #+#    #+#             */
/*   Updated: 2023/01/30 00:30:31 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *p, int c)
{
	int		i;
	char	a;

	a = c;
	i = 0;
	if (a == '\0')
		return ((char *)(p + ft_strlen(p)));
	while (p[i] != '\0')
	{
		if (p[i] == a)
		{
			return ((char *)(&p[i]));
		}
		i++;
	}
	return (NULL);
}
