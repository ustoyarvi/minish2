/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:27:05 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 01:24:07 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *a = "qwert";
	char *b = "";

	printf("%d \n", ft_strlen(a));
	printf("%lu \n", strlen(a));
	printf("%d \n", ft_strlen(b));
	printf("%lu \n", strlen(b));
	return (0);
}
*/
