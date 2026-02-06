/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 07:43:45 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/30 08:36:15 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"

char	*cat_string_and_free(char *str1, char *str2)
{
	char	*result;

	result = ft_strjoin(str1, str2);
	free(str1);
	return (result);
}

char	*cat_string_and_free_all(char *str1, char *str2)
{
	char	*result;

	result = ft_strjoin(str1, str2);
	free(str1);
	free(str2);
	return (result);
}

char	*cat_char_and_free(char *str, char c)
{
	char	*result;
	int		src_len;

	src_len = ft_strlen(str);
	result = (char *) malloc(sizeof(char) * (src_len + 2));
	ft_memcpy(result, str, src_len);
	free(str);
	result[src_len] = c;
	result[src_len + 1] = 0;
	return (result);
}

void	reverse_string(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

void	str_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
