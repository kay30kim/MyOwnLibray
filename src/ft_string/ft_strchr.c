/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:27 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/22 15:35:03 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	str[] = "  Hellow World ! ";
	char	c = 'W';

	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str,c));
	return (0);
}*/