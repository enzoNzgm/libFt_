/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:40:22 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/12 18:02:10 by enzuguem         ###   ########.fr       */
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
		return (NULL);
	if (str_s < str_d)
		while (n--)
			str_d[n] = str_s[n];
	else
		while (n--)
			*str_d++ = *str_s++;
	return (dest);
}
