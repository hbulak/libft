/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:46:22 by hbulak            #+#    #+#             */
/*   Updated: 2023/11/03 11:04:11 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
			return ((char *)s);
		if (*s == '\0')
		{
			if (*s == c)
				return ((char *)s);
			else
				return (NULL);
		}
		s++;
	}
}

// int main()
// {
//     char *str = "Hello, World!";
//     char *result;

//     // Test for a character present in the string
//     result = ft_strchr(str, 'W');
//     if (result != NULL)
//         printf("Character 'W' found at position: %ld\n", result - str);
//     else
//         printf("Character 'W' not found.\n");

//     // Test for a character not present in the string
//     result = ft_strchr(str, 'z');
//     if (result != NULL)
//         printf("Character 'z' found at position: %ld\n", result - str);
//     else
//         printf("Character 'z' not found.\n");

//     // Test for null terminator
//     result = ft_strchr(str, '\0');
//     if (result != NULL)
//         printf("Null terminator found at position: %ld\n", result - str);
//     else
//         printf("Null terminator not found.\n");

//     return 0;
// }
