/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:54:32 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 10:29:54 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	if (dstsize > 0)
	{
		while (n < dstsize - 1 && src[n])
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	while (src[n])
	{
		n++;
	}
	return (n);
}

// int main() 
// {
// 	char src[] = "Hello, World!";
// 	char dst1[50];
// 	char dst2[6];
// 	char dst3[0];
// 	size_t len;
// 	len = ft_strlcpy(dst1, src, sizeof(dst1));
// 	printf("Destination 1: %s 
//	(Expected length: %zu, Actual: %zu)\n", dst1,
//  len, strlen(dst1));
// 	len = ft_strlcpy(dst2, src, sizeof(dst2));
// 	printf("Destination 2: %s (Expected length: %zu, 
// Actual: %zu)\n", dst2, len, strlen(dst2));	
// 	len = ft_strlcpy(dst3, src, sizeof(dst3));
// 	printf("Expected length for empty dst: %zu\n", len);
// 	return 0;
// }