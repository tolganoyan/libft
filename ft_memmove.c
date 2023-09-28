/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:26:31 by tnoyan            #+#    #+#             */
/*   Updated: 2023/02/14 01:22:36 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t;
	unsigned char	*m;

	t = (unsigned char *)dest;
	m = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (m < t)
	{
		m += n;
		t += n;
		while (n-- > 0)
			*--t = *--m;
	}
	else
		while (n-- > 0)
			*t++ = *m++;
	return (dest);
}
