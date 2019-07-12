/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 18:14:47 by nmafa             #+#    #+#             */
/*   Updated: 2019/07/09 12:54:46 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*s1;
	char			*s2;
	unsigned int	i;

	if (dst == src)
		return (dst);
	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			s1[i] = s2[i];
	}
	else
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
