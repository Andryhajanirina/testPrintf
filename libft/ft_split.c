/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:03:32 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/23 14:26:00 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	split_len(char *s, char c)
{
	int	result_len;
	int	i;
	int	after_sep;

	i = 0;
	result_len = 0;
	after_sep = 1;
	while (s[i])
	{
		if (s[i] != c && after_sep)
		{
			after_sep = 0;
			result_len++;
		}
		else if (s[i] == c)
		{
			after_sep = 1;
		}
		i++;
	}
	return (result_len);
}

static int	add_to_result(char **result, int *index, const char *s, int end)
{
	char	*word;
	int		i;

	word = ft_substr(s, 0, end);
	if (!word)
	{
		i = 0;
		while (i < *index)
		{
			free(result[i]);
			i++;
		}
		free(result);
		return (0);
	}
	result[*index] = word;
	(*index)++;
	return (1);
}

static char	**split(char const *s, char c, char **result)
{
	int	i;
	int	start;
	int	index;
	int	after_sep;

	i = -1;
	after_sep = 1;
	index = 0;
	while (s[++i])
	{
		if (s[i] != c && after_sep)
			start = i;
		if (s[i] == c && !after_sep
			&& !add_to_result(result, &index, s + start, i - start))
			return (NULL);
		after_sep = s[i] == c;
	}
	if (!after_sep && !add_to_result(result, &index, s + start, i - start))
		return (NULL);
	result[index] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **) malloc(sizeof(char *) * (split_len((char *)s, c) + 1));
	if (!result)
		return (NULL);
	split(s, c, result);
	if (!result)
		return (NULL);
	return (result);
}
