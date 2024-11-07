/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:07:25 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/06 11:05:33 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str_d;
	char	*str_s;

	str_d = (char *)dest;
	str_s = (char *)src;
	if (!dest && !src)
		return (0);
	while (n > 0)
	{
		*str_d = *str_s;
		str_d++;
		str_s++;
		n--;
	}
	return (dest);
}
