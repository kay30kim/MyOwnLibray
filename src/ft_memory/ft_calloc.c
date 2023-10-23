/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:26:10 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/23 18:38:46 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size * count still doesn't make sense
void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	if (size == 0 || count == 0)
		return (0);
	tmp = (char *)malloc(size * count);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
