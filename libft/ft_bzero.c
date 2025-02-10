/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 01:14:14 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/17 18:53:32 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char a[] = "12345678798";
	char b[] = "12345678789";

	ft_bzero(a, 19);
	bzero(b, 10);

	printf("%s \n", a);
	printf("%s \n", b);
	return (0);
}
*/
