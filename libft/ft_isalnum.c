/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:55:30 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 01:13:22 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a, b, c;

	a = 'q';
	b = '3';
	c = '*';	
	printf("%d \n", ft_isalnum(a));
	printf("%d \n", isalnum(a));
	printf("%d \n", ft_isalnum(b));
	printf("%d \n", isalnum(b));
	printf("%d \n", ft_isalnum(c));
	printf("%d \n", isalnum(c));
	return (0);
}
*/
