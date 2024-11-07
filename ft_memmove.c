/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:40:22 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/06 13:07:15 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str_d;
	char	*str_s;

	str_d = (char *)dest;
	str_s = (char *)src;
	if (!dest && !src)
		return (0);
	if (str_s < str_d)
	{
		while (n > 0)
		{
			str_d[n - 1] = str_s[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*str_d = *str_s;
			str_d++;
			str_s++;
			n--;
		}
	}
	return (dest);
}
