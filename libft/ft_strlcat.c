/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:36:18 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/26 07:54:41 by mrazakam         ###   ########.fr       */
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
