/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:05:47 by adshafee          #+#    #+#             */
/*   Updated: 2023/09/23 10:23:39 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= ft_recursive_factorial(nb - 1) * nb;
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(4));
// }
