/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:52:34 by ytapano           #+#    #+#             */
/*   Updated: 2023/09/26 22:15:59 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min ;
	ptr = (int *)malloc(len * sizeof(int));
	if (!ptr)
	{
		*range = NULL;
		return (-1);
	}
	*range = ptr;
	i = 0;
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (len);
}
