/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:44:54 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:12 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERTER_H
# define FT_CONVERTER_H

# include <stdlib.h>

char	*string_converter(char *variable);
char	*pointer_converter(size_t p);
char	*char_converter(char c, int *displayed_char);

#endif