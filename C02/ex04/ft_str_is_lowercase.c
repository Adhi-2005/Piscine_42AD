/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:18:16 by adshafee          #+#    #+#             */
/*   Updated: 2023/09/09 14:55:21 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\n')
		return (1);
	while (str[i])
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
	else
		return (0);
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "";

// 	printf("the result = %d", ft_str_is_lowercase(str));
// }
