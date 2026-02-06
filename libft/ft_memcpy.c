/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:55:03 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/26 07:54:59 by mrazakam         ###   ########.fr       */
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
