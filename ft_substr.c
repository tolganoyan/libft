/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoyan <tnoyan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 02:09:46 by tnoyan            #+#    #+#             */
/*   Updated: 2023/01/30 02:10:28 by tnoyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	str_len;
	char			*str;

	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	if (str_len < start + len)
		str = malloc(sizeof(char) * str_len - start + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
