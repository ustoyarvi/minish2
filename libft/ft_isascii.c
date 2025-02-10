/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:20:04 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/18 23:18:36 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a, b, c, d;

	a = '1';
	b = '&';
	c = ' ';
	d = '\n';
	printf("%d \n", ft_isascii(a));
	printf("%d \n", isascii(a));
	printf("%d \n", ft_isascii(b));
	printf("%d \n", isascii(b));
	printf("%d \n", ft_isascii(c));
	printf("%d \n", isascii(c));
	printf("%d \n", ft_isascii(d));
	printf("%d \n", isascii(d));
	return (0);
}
*/
