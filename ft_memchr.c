/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:33:33 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 10:32:34 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		i++;
		ptr++;
	}
	return (NULL);
}

// int main()
// {
//     char arr[] = "Hello, World!";
//     char c = '\0';
//     void *res = ft_memchr(arr, c, sizeof(arr));

//     if (res != NULL)
//         printf("Character '%c' found at position: 
// %ld\n", c, (char *)res - arr);
//     else
//         printf("Character '%c' not found.\n", c);

//     c = 'z';
//     res = ft_memchr(arr, c, sizeof(arr));

//     if (res != NULL)
//         printf("Character '%c' found at position: 
// %ld\n", c, (char *)res - arr);
//     else
//         printf("Character '%c' not found.\n", c);

//     return 0;
// }