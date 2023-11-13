/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:14:52 by adshafee          #+#    #+#             */
/*   Updated: 2023/09/18 13:56:31 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (sign * n);
}

int	main(void)
{
	char	str[] = "   --+---+123mj4567";

	printf("%d", ft_atoi(str));
}




// int	main(int ac, char **av)
// {
// 	int i;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		while (av[1][i] != '\0')
// 		{
// 			ft_atoi(&av[1][i]);
// 			i++;
// 		}
// 	}
// }