/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:21:19 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/17 19:09:37 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (p_dest == p_src)
		return (dest);
	if (p_dest < p_src)
	{
		while (len--)
		{
			*p_dest++ = *p_src++;
		}
	}
	else
	{
		p_dest += len;
		p_src += len;
		while (len--)
		{
			*--p_dest = *--p_src;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a1[20] = "dest1";
	char	b1[20] = "source1";
	char 	a2[20] = "dest2";
	char	b2[20] = "source2";

	printf("%s\n", (char *)ft_memmove(a1, b1, 2));
	printf("%s\n", (char *)memmove(a2, b2, 2));
	return 0;
}
*/
