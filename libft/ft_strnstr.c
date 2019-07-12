/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:08:51 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/29 02:53:51 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	m;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		m = 0;
		while (i + m < len && s1[i + m] == s2[m] && s2[m] != '\0')
			m++;
		if (s2[m] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
