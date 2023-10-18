/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:16 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/18 14:18:50 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size_t n)
{
	t_size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	unsigned char* dest = (unsigned char*)dst;
	unsigned char* srcc = (unsigned char*)src;
	while (i < n)
	{
		// It is also work : ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}