/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:00:57 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/08 19:06:19 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	int		nb;

	i = 0;
	len = (n <= 0) ? 1 : 0;
	nb = n;
	while (nb && ++len)
		nb /= 10;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0 && (str[i++] = '-'))
		n = -n;
	while (len-- > i)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	str[i] = '\0';
	return (str);
}
