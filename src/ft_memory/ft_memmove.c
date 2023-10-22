/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:18 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/22 14:59:39 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			i;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc <= dest && dest <= srcc + len)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = srcc[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[30] = "Hello, World!";
	printf("%s\n", ft_memmove(src+6, src, 14));
	printf("%s\n", memmove(src+6, src, 14));
	return (0);
}*/
