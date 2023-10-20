/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:26:10 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/20 15:32:28 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)malloc(size * count);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		tmp[i] = 0;
		i++;
	}
	return (void *)tmp;
}
