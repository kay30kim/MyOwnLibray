/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:18 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/18 17:01:32 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size_t len)
{
	unsigned char*	dest;
	unsigned char*	srcc;
	int				i;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc <= dest && dest <= srcc + len)
	{
		i = len;
		while (--i >= 0)
			dest[i] = src[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			dest[i] = srcc[i];
	}
	return (dst);
}