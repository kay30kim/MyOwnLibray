/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:22 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/18 17:10:06 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char *str;
	
	str = (char *)b;
	while (i < len)
	{
		str[i] = (char)c;
	}
}