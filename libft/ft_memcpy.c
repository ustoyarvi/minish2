/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:22:21 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/24 16:19:32 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Копирует n байт из обсласти памяти, на которую указывает *src 
 * в область памяти, на которую указывает *dst.
 * Если области памяти перекрываются поведение функции не определено.
 */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	if (!dest && !src)
		return (0);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a1[] = "1234567890";
	char b1[] = "zrr4422sdffs";
	char a2[] = "1234567890";
	char b2[] = "zrr4422sdffs";
	
	printf("%s\n", (char *)ft_memcpy(a1, b1, 11));
	printf("%s\n", (char *)memcpy(a2, b2, 11));
	return 0;
}
*/
