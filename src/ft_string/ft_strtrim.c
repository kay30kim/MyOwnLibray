/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:31:52 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/21 21:23:28 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_c_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	begin;
	size_t	end;
	int		i;

	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] && ft_c_in_set(s1[begin], set))
		begin++;
	while (end > begin && ft_c_in_set(s1[end], set))
		end--;
	tmp = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!tmp)
		return (0);
	i = 0;
	while (begin < end)
	{
		tmp[i++] = s1[begin++];
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	const char	*input = "   Hello, World!   ";
	const char	*charset = " ";
	char		*trimmed;

	trimmed = ft_strtrim(input, charset);
	if (trimmed != NULL)
	{
		printf("Original: \"%s\"\n", input);
		printf("Trimmed: \"%s\"\n", trimmed);
		free(trimmed);
	}
	return (0);
}
*/
