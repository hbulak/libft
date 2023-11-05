/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:52 by hbulak            #+#    #+#             */
/*   Updated: 2023/11/03 11:00:04 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (1)
	{
		if (*s == (char)c)
			last_occurrence = s;
		if (*s == '\0')
			break ;
		s++;
	}
	return ((char *)last_occurrence);
}
// #include <stdio.h>
// int main()
// {
//     char *str = "Hello, World!";
//     char *result;

//     result = ft_strrchr(str, 'o');
//     if (result != NULL)
//         printf("Character 'o' found at position: %ld\n", result - str);
//     else
//         printf("Character 'o' not found.\n");
//     result = ft_strrchr(str, 'z');
//     if (result != NULL)
//         printf("Character 'z' found at position: %ld\n", result - str);
//     else
//         printf("Character 'z' not found.\n");
//     result = ft_strrchr(0xaaaad5bd4480: "teste", 1024: '\0');
//     if (result != NULL)
//         printf("Null terminator found at position: %s|\n", result);
//     else
//         printf("Null terminator not found.\n");

//     return 0;
// }
