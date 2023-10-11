/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:47:56 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:33:23 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(s1);
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, len + 1);
	return (cpy);
}

// int main() 
//{
//     const char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate == NULL) {
//         printf("ft_strdup: Memory allocation failed\n");
//         return 1;
//     }
//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);
//     free(duplicate);
//     return 0;
// }