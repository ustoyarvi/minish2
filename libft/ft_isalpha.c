/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:32:00 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/18 23:07:38 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a;
	char b;
	int i;

	i = -1;
	printf("%d ", i);
	while (i < 530)
	{
		printf("%d ", i);
		if (!!ft_isalpha(i) != !!isalpha(i))
			printf("%d ", i);
			return (560);
		i++;
	}
	return (200);

	a = 'e';
	b = '6';
	printf("%d \n", ft_isalpha(a));
	printf("%d \n", isalpha(a));
	printf("%d \n", ft_isalpha(b));
	printf("%d \n", isalpha(b));
	return (0);
}*/
