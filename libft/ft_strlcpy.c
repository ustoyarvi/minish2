/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:34:53 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 19:11:10 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *  Копирует строку из src в dst, но не более чем (dstsize - 1) символов, и
 *   затем устанавливает завершающий нуль-символ.
 *
 *	Возвращает длину строки src, которая была скопирована
 */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	src[] = "Hello, world!";
	char	dest1[13];
	char	dest2[13];
	size_t len1 = ft_strlcpy(dest1, src, sizeof(dest1));
	size_t len2 = strlcpy(dest2, src, sizeof(dest2));
	
	printf("Res: %s\n", dest1);
	printf("len dest1 = %zu\n", len1);
	printf("Res: %s\n", dest2);
	printf("len dest1 = %zu\n", len2);
	return 0;
}
*/
