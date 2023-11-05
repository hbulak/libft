/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:52:01 by hbulak            #+#    #+#             */
/*   Updated: 2023/11/02 20:05:04 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	if (!dst && !dstsize)
		return (0);
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize == 0 || dst_len == dstsize)
		return (dst_len + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dst1[50] = "Destination: ";
//     char dst2[25] = "Destination: ";
//     char dst3[0] = "";
//     size_t len;
//     len = ft_strlcat(dst1, src, sizeof(dst1));
//     printf("Destination 1: %s (Expected length: %zu, 
// Actual: %zu)\n", dst1, len, strlen(dst1));
//     len = ft_strlcat(dst2, src, sizeof(dst2));
//     printf("Destination 2: %s (Expected length: 
// %zu, Actual: %zu)\n", dst2, len, strlen(dst2));
//     len = ft_strlcat(dst3, src, sizeof(dst3));
//     printf("Expected length for empty dst: %zu\n", len);
//     return 0;
// }