/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:50:11 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 19:03:12 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Поиск последнего вхождения символа c в строке s
 */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	f;
	size_t	i;

	last = (char *)s;
	f = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == f)
			return (last + i);
		i--;
	}
	if (last[i] == f)
		return (last);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "tripo";
//  int c = '\0';

	printf("%p\n", ft_strrchr(s, 't' + 256));
	printf("%p\n", strrchr(s, 't' + 256));
	return (0);
}*/
