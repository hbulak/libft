/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:35:58 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 10:23:08 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return ((int)((unsigned char)*ptr1 - (unsigned char)*ptr2));
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}

// int main()
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     char str3[] = "Hello, Workd!";
//     printf("Comparison between str1 and
//			str2: %d\n", ft_memcmp(str1, str2, sizeof(str1)));
//     printf("Comparison between str1 and str3:
//			%d\n", ft_memcmp(str1, str3, sizeof(str1)));
//     return 0;
// }