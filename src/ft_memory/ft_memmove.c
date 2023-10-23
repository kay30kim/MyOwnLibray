/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:18 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/23 14:13:00 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			i;

	if (!dst || !src || !len)
		return (dst);
	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc <= dest && dest <= srcc + len)
	{
		i = len + 1;
		while (--i > 0)
			dest[i - 1] = srcc[i - 1];
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
	char src2[30] = "";
	printf("%s\n", ft_memmove(src+6, src, 14));
	printf("%s\n", memmove(src+6, src, 14));
	printf("%s\n", ft_memmove(src+6, src2, 0));
	printf("%s\n", memmove(src+6, src2, 0));
	printf("%s\n", ft_memmove(src, src, 5));
	printf("%s\n", memmove(src, src, 5));
	return (0);
}*/
