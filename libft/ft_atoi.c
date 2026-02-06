/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:45:14 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/23 14:03:38 by mrazakam         ###   ########.fr       */
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
