/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:14:33 by adshafee          #+#    #+#             */
/*   Updated: 2023/09/17 12:58:38 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	v;

	i = 0;
	v = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && size - 1 > i)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (v);
}

// int	main(void)
// {
// 	char src[] = "Wor";
// 	char dest[] = "Hello";
// 	printf("%d | %s\n", ft_strlcpy(dest, src, 3), dest);
// 	printf("%lu | %s", strlcpy(dest, src, 3), dest);

// }