/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:51:13 by nmafa             #+#    #+#             */
/*   Updated: 2019/06/06 16:33:00 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*n;
	int				i;

	i = 0;
	n = (unsigned char *)b;
	while (i < (int)len)
	{
		n[i] = c;
		i++;
	}
	return (b);
}
