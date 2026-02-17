/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 08:49:29 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:13 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h"
#include "ft_string.h"
#include "ft_hexadecimal.h"

char	*string_converter(char *variable)
{
	if (variable == NULL)
		return (ft_strdup("(null)"));
	return (ft_strdup(variable));
}

char	*pointer_converter(size_t p)
{
	if (p)
		return (cat_string_and_free_all(ft_strdup("0x"),
				ft_tohexadecimal(p)));
	return (ft_strdup("(nil)"));
}

char	*char_converter(char c, int *displayed_char)
{
	char	*variable;
	char	null;

	null = 0;
	variable = ft_strdup("");
	if (c != 0)
		return (cat_char_and_free(variable, c));
	write(1, &null, 1);
	*displayed_char = *displayed_char + 1;
	return (variable);
}
