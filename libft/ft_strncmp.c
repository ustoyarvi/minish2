/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 01:34:14 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/23 16:56:26 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Для сравнения двух строк с заданными длинами.
 * n - максимальное количество символов для сравнения.
*/
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (a[i] != b[i] || a[i] == 0 || b[i] == 0)
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "abddefg";
	char	s2[] = "abdcefgklp";

	printf("%ld\n", ft_strncmp(s1, s2, 9));
	printf("%d\n", strncmp(s1, s2, 9));
	printf("%s\n", "arg == 5");
//	print_result(ft_strncmp("test", "", 4));
	printf("%ld\n", ft_strncmp("", "test", 4));
	printf("%d\n", strncmp("", "test", 4));
  //       else if (arg == 6)
	printf("%s\n", "arg == 6");
	printf("%ld\n", ft_strncmp("test", "", 4));
	printf("%d\n", strncmp("test", "", 4));
	
	// 		(arg == 9)
	printf("%s\n", "arg == 9");
	printf("%ld\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("%d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
//else if (arg == 10)
	printf("%s\n", "arg == 10");
	printf("%ld\n", ft_strncmp("abcdefgh", "", 0));
	printf("%d\n", strncmp("abcdefgh", "", 0));
//else if (arg == 11)
	printf("%s\n", "arg == 11");
	printf("%ld\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d\n", strncmp("test\200", "test\0", 6));

	return (0);
}
*/
