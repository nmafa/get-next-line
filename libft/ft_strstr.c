/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:28:12 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/30 17:20:10 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int i;
	unsigned int m;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		m = 0;
		while (s2[m] != '\0' && s1[i + m] == s2[m])
			m++;
		if (s2[m] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
