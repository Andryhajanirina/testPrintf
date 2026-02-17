/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:55:03 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:13 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_ptr;

	i = 0;
	dest_ptr = (unsigned char *) dest;
	while (i < n)
	{
		dest_ptr[i] = *((unsigned char *) src + i);
		i++;
	}
	return (dest);
}
