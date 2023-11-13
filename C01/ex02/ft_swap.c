/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:19:37 by adshafee          #+#    #+#             */
/*   Updated: 2023/09/06 16:18:06 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 8;
// 	num2 = 4;
// 	printf("num1 = %d : num2 = %d", num1, num2);
// 	ft_swap(&num1, &num2);
// 	printf("\nnum1 = %d : num2 = %d", num1, num2);
// }
