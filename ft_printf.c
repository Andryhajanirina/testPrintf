/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:13:47 by mrazakam          #+#    #+#             */
/*   Updated: 2026/02/05 14:25:10 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_converter.h"
#include "ft_string.h"
#include "ft_uitoa.h"
#include "ft_hexadecimal.h"

int	is_variable(const char *str)
{
	static char	*args[10]
		= {"%a", "%c", "%s", "%p", "%d", "%i", "%u", "%x", "%X", "%%"};
	int			i;

	i = 0;
	while (args[i])
	{
		if (ft_strncmp(str, args[i], 2) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*get_variable_str(char *type, va_list args,
	int *displayed_char)
{
	char	*variable;

	variable = NULL;
	if (ft_strncmp(type, "%d", 2) == 0 || ft_strncmp(type, "%i", 2) == 0)
		variable = ft_itoa(va_arg(args, int));
	else if (ft_strncmp(type, "%s", 2) == 0)
		variable = string_converter(va_arg(args, char *));
	else if (ft_strncmp(type, "%p", 2) == 0)
		variable = pointer_converter((size_t) va_arg(args, void *));
	else if (ft_strncmp(type, "%c", 2) == 0)
		variable = char_converter(va_arg(args, int), displayed_char);
	else if (ft_strncmp(type, "%x", 2) == 0)
		variable = ft_tohexadecimal(va_arg(args, unsigned int));
	else if (ft_strncmp(type, "%X", 2) == 0)
	{
		variable = ft_tohexadecimal(va_arg(args, unsigned int));
		str_upper(variable);
	}
	else if (ft_strncmp(type, "%u", 2) == 0)
		variable = ft_uitoa(va_arg(args, unsigned int));
	else if (ft_strncmp(type, "%%", 2) == 0)
		variable = ft_strdup("%");
	else if (ft_strncmp(type, "%a", 2) == 0)
		variable = ft_strdup("my awsome 42");
	free(type);
	return (variable);
}

void	write_formated_str(const char *str, va_list args,
	int *displayed_char)
{
	int		i;
	char	*variable;

	i = 0;
	while (str[i])
	{
		if (is_variable(str + i))
		{
			variable = get_variable_str(ft_substr(str + i, 0, 2),
					args, displayed_char);
			i++;
		}
		else
			variable = ft_substr(str + i, 0, 1);
		write(1, variable, ft_strlen(variable));
		*displayed_char = *displayed_char + ft_strlen(variable);
		free(variable);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	int		displayed_char;
	va_list	args;

	if (!str)
		return (0);
	va_start(args, str);
	displayed_char = 0;
	write_formated_str(str, args, &displayed_char);
	va_end(args);
	return (displayed_char);
}
