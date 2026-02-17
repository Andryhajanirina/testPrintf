/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:46:32 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:12 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

char	*cat_string_and_free(char *str1, char *str2);
char	*cat_string_and_free_all(char *str1, char *str2);
char	*cat_char_and_free(char *str, char c);
void	reverse_string(char *str);
void	str_upper(char *str);

#endif