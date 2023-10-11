/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:11:24 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/04 12:13:31 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	int_max;
	size_t	total_size;
	void	*ptr;

	int_max = 4294967296;
	if (size && count > int_max / size)
		return (NULL);
	total_size = count * size;
	ptr = (void *)malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main() 
// {
// 	ft_calloc(INT_MIN, INT_MIN);
// }
