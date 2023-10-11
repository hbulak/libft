/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:47:13 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:33:06 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	n;

	n = 0;
	while (src[n])
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (dst);
}

// int main() 
// {
// 		char src[] = "Hello, World!";
// 		char dst1[50];
// 		char dst2[6];
// 		char dst3[0];
// 		printf("Destination: %s, Source: %s \n", ft_strcpy(dst1, src), src);
// 		return 0;
// }