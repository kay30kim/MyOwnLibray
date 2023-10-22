/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:29:50 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/21 21:27:10 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cnt_str(const char *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			cnt++;
		i++;
	}
	return (cnt);
}

int	ft_len_str(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	res = (char **)malloc(sizeof(char *) * ft_cnt_str(s, c));
	i = -1;
	j = 0;
	k = 0;
	while (j < ft_cnt_str(s, c))
	{
		i++;
		res[j] = (char *)malloc(sizeof(char *) * (ft_len_str(&s[i], c) + 1));
		k = 0;
		while (s[i] && s[i] != c)
		{
			res[j][k] = s[i];
			i++;
		}
		res[j][k] = '\0';
		j++;
	}
	return (res);
}
