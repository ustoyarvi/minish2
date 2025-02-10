/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:25:05 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/23 18:18:55 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * для безопасного объединения двух строк с учетом длины целевой строки.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	if (dstsize > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + i + 1 < dstsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	a[20] = "Nyan  !";

	printf("%zu", strlcat(NULL, a, 0));	
	printf("%zu", ft_strlcat(NULL, a, 0));	
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] = "34";
	char	dst_ft[20] = "34";
	const char	*src = "";

	size_t	len = strlcat(dst, src, 0);
	size_t	len_ft = ft_strlcat(dst_ft, src, 0);
	printf("%s\n", dst);
	printf("%s\n", dst_ft);
	printf("len %zu\n", len);
	printf("len_ft %zu\n", len_ft);
	return (0);
}*/
