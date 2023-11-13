/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:31:09 by adshafee          #+#    #+#             */
/*   Updated: 2023/09/06 16:18:02 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;
// 	int	div;
// 	int	mod;

// 	num1 = 8;
// 	num2 = 2;
// 	ft_div_mod(num1, num2, &div, &mod);
// 	printf("div = %d\nmod = %d", div, mod);
// }
