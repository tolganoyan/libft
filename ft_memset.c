/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:23:53 by tnoyan            #+#    #+#             */
/*   Updated: 2023/09/15 09:18:01 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b1;
	unsigned char	c1;

	b1 = (unsigned char *)b;
	c1 = (unsigned char)c;
	while (len)
	{
		*(b1) = c1;
		len--;
		b1++;
	}
	return (b);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *b;
	int a[] = {1};
	b = malloc(sizeof(int));
	b = (char *)a;
	ft_memset(b,0,4);
	b[2] = 1;
	printf("%c", b[0]);
	printf("%c", b[1]);
	printf("%c", b[2]);
	printf("%c", b[3]);
}
