/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:30:43 by tnoyan            #+#    #+#             */
/*   Updated: 2023/01/30 00:30:56 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	a;

	a = c;
	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == a)
		{
			return ((char *)(&str[i]));
		}
	}
	return (NULL);
}
