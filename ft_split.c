/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:48:28 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/08 18:58:41 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_char(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_check_char(s[i], c))
		{
			count++;
			while (s[i] && !ft_check_char(s[i], c))
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !ft_check_char(s[i], c))
		i++;
	return (i);
}

char	*ft_word_cpy(char const *s, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!ft_check_char(s[i], c))
		{
			str[j] = ft_word_cpy(s + i, ft_word_len(s + i, c));
			j++;
			i += ft_word_len(&s[i], c);
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
