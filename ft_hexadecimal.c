/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 07:47:11 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/30 10:47:38 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"
#include "ft_string.h"

char	*ft_tohexadecimal(size_t nbr)
{
	char	*result;

	if (nbr == 0)
		return (ft_strdup("0"));
	result = ft_strdup("");
	while (nbr)
	{
		result = cat_char_and_free(result, "0123456789abcdef"[nbr % 16]);
		nbr = nbr / 16;
	}
	reverse_string(result);
	return (result);
}
