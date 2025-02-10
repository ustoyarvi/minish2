/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:58:33 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 01:28:39 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Ищет первое вхождение подстроки в строку, но не более заданной длины.
 * Позволяет найти подстроку в любой части строки, но только если она входит
 * в указанную длину.
 */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*compare_start;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			compare_start = big + i;
			while (i + j < len && big[i + j] != '\0' && little[j] != '\0'
				&& big [i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)compare_start);
			i++;
		}
		else
			i++;
	}
	return (NULL);
}
