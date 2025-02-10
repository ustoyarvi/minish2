/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 23:20:44 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/01 00:22:28 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * '\v' - вертикальная табуляция
 * '\f' - перевод формата
 * '\r' - возврат каретки
 */

#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *a = "   -465";
	int b;
	int	c;

	b = ft_atoi(a);
	c = atoi(a);
	printf("%d\n", b);
	printf("%d\n", c);
	return (0);
}*/
