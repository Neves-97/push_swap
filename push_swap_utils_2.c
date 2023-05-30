/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:59:42 by roda-min          #+#    #+#             */
/*   Updated: 2023/05/29 12:43:07 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	result = 0;
	signal = 1;
	while (str[i] && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
			str++;
	if (str[i] == '-')
		signal = -1;
	if (str[i] == '+' || str[i] == '-')
		str++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		str++;
	}
	return (result * signal);
}
