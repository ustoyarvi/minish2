/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:26:19 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/13 21:03:47 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Ищет первое вхождение символа в заданном блоке памяти и возвращает указатель
 * на найденный символ или NULL, если символ не найден.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "Hello";
	char ch = 'o';
	size_t len = strlen(str);

	void *result = ft_memchr(str, ch, len);
	printf("%ld", (char *)result - str);
	return (0);
}
*/
