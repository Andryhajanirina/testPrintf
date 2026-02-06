/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:44:54 by mrazakam          #+#    #+#             */
/*   Updated: 2026/02/04 07:30:58 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERTER_H
# define FT_CONVERTER_H

# include <stdlib.h>

char	*string_converter(char *variable);
char	*pointer_converter(size_t p);
char	*char_converter(char c, int *displayed_char);

#endif