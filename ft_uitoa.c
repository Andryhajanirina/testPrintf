/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 07:42:29 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/30 07:50:14 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	int_char_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	pow_10(unsigned int n)
{
	int	res;

	res = 1;
	while (n)
	{
		res = res * 10;
		n--;
	}
	return (res);
}

char	*ft_uitoa(unsigned int nbr)
{
	char			*result;
	int				i;
	int				result_len;

	result_len = int_char_len(nbr);
	result = (char *) malloc(sizeof(char) * (result_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < result_len)
	{
		result[i] = nbr / pow_10(result_len - i - 1) + '0';
		nbr = nbr % pow_10(result_len - i - 1);
		i++;
	}
	result[i] = 0;
	return (result);
}
