/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:11:18 by alirola-          #+#    #+#             */
/*   Updated: 2023/04/22 14:41:13 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				count;
	char				*dest;
	char				*srce;

	if (!src && !dst)
		return (0);
	count = 0;
	dest = (char *)dst;
	srce = (char *)src;
	while (count < n)
	{
		dest[count] = (char)srce[count];
		count++;
	}
	return (dst);
}
