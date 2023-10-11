/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:38:29 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:32:32 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main() {
//     int arr[5];
//     ft_memset(arr, 1, sizeof(arr));  // Set the entire array to zeros
//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//         if (arr[i] != 1) 
// 	{
//             printf("Test failed!\n");
//             return 1;
//         }
//     }
//     printf("Test passed!\n");
//     return 0;
// }
