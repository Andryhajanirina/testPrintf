/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:53:17 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/21 15:46:59 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	malloc_size;

	malloc_size = nmemb * size;
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(malloc_size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, malloc_size);
	return (pointer);
}
