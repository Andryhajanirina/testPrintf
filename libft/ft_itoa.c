/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:05:15 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:13 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_char_len(int n)
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

static int	pow_10(int n)
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

char	*ft_itoa(int nbr)
{
	char	*result;
	long	n;
	int		i;
	int		result_len;

	n = nbr;
	result_len = int_char_len(n);
	result = (char *) malloc(sizeof(char) * (result_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		i++;
	}
	while (i < result_len)
	{
		result[i] = n / pow_10(result_len - i - 1) + '0';
		n = n % pow_10(result_len - i - 1);
		i++;
	}
	result[i] = 0;
	return (result);
}
