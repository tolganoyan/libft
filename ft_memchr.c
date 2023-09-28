/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:32:09 by tnoyan            #+#    #+#             */
/*   Updated: 2023/02/06 16:28:33 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (*(unsigned char *)&ptr[index] == (unsigned char)c)
			return ((void *)(&ptr[index]));
		index++;
	}
	return (NULL);
}
