/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:25:43 by tnoyan            #+#    #+#             */
/*   Updated: 2023/02/06 16:25:37 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst != src && n)
	{
		while (++i < n)
		{
			(((unsigned char *)dst)[i] = ((unsigned char *)src)[i]);
		}
	}
	return (dst);
}
