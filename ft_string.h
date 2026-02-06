/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:46:32 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/30 10:47:06 by mrazakam         ###   ########.fr       */
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