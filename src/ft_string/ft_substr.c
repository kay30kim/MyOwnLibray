/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:32:13 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/22 18:01:35 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (i < len && s[start + i])
		{
			tmp[i] = s[start + i];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "abcdefghijklmnop";
	printf("%s\n", ft_substr(str1, 3, 0));
	printf("%s\n", ft_substr(str1, 3, 5));
	printf("%s\n", ft_substr(str1, 3, 20));
	return (0);
}*/
