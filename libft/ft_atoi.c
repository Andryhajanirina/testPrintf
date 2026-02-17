/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <andry-ha@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:45:14 by XXXXXXXX          #+#    #+#             */
/*   Updated: 2026/02/17 11:59:13 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*skip_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	return (str + i);
}

int	ft_atoi(const char *str)
{
	int		is_negative;
	int		i;
	long	result;

	if (!str)
		return (0);
	str = skip_space((char *) str);
	is_negative = 0;
	i = 0;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = 1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	if (is_negative)
		return (-result);
	return (result);
}
