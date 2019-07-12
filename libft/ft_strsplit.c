/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 04:03:44 by nmafa             #+#    #+#             */
/*   Updated: 2019/07/08 18:46:02 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (0);
	p = (char **)malloc(ft_strlen(s) * sizeof(p));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (start < i)
			p[j++] = ft_strsub(s, start, (i - start));
	}
	p[j] = 0;
	return (p);
}
