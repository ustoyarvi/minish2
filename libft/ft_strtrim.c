/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:36:34 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 19:01:42 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Удаление указанных символов с начала и конца строки. 
 *
 */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	if (set == NULL)
		return (0);
	while (*set && *set != c)
		set++;
	if (*set != '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		str_l;
	int		str_r;
	int		i;

	if (!s1 || !set)
		return (NULL);
	str_l = 0;
	str_r = ft_strlen(s1) - 1;
	while (str_l <= str_r && is_in_set(set, s1[str_l]))
		str_l++;
	if (str_l < str_r)
		while (is_in_set(set, s1[str_r]))
			str_r--;
	trimmed_str = (char *)malloc(sizeof(char) * (str_r - str_l + 2));
	if (trimmed_str == NULL)
		return (NULL);
	i = 0;
	while (str_l <= str_r)
		trimmed_str[i++] = s1[str_l++];
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
