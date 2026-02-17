/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:36:18 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:13 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		result_len;
	size_t	dst_len;
	int		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > dst_len)
		result_len = dst_len + src_len;
	else
		result_len = size + src_len;
	i = 0;
	if (size > 0)
	{
		while (src[i] && (dst_len < size - 1))
		{
			dst[dst_len] = src[i];
			dst_len++;
			i++;
		}
		dst[dst_len] = 0;
	}
	return (result_len);
}
