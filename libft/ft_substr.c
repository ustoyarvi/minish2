/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:19:31 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/26 23:25:48 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *	Извлекает подстроку из строки, начиная с указанного индекса и имеющую
 * заданную длину. 
 * Позволяет извлекать подстроку из середины строки с заданной длиной.
 */

#include "libft.h"

static unsigned int	ft_min(unsigned int n1, unsigned int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	len_s;
	unsigned int	len_substr;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		len_substr = 0;
	else
		len_substr = ft_min(len_s, len);
	substr = (char *)malloc(sizeof(char) * (len_substr + 1));
	if (substr == NULL)
		return (NULL);
	s += start;
	substr[len_substr] = '\0';
	while (len_substr--)
		substr[len_substr] = s[len_substr];
	return (substr);
}
