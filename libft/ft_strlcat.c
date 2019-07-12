/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 03:52:51 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/29 05:10:50 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	m;

	n = 0;
	m = 0;
	while (dst[n] && n < size)
		n++;
	while ((src[m]) && ((n + m + 1) < size))
	{
		dst[n + m] = src[m];
		m++;
	}
	if (n != size)
		dst[n + m] = '\0';
	return (n + ft_strlen(src));
}
