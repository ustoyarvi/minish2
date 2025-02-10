/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:47:33 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 19:15:32 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Ищет первое вхождение символа c в строке s и возвращает указатель
 *  на это вхождение.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	f;
	int		i;

	f = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == f)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == f)
		return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char s[] = "";
	int	c = '\0';

	printf("%p\n", (void *)ft_strchr(s, c));
	printf("%p\n", (void *)strchr(s, c));
	
	printf("%p\n", ft_strchr(s, 't' + 256));
	printf("%p\n", strchr(s, 't' + 256));
	
	return (0);
}*/
