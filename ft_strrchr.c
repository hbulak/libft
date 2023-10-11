/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:52 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:34:34 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_occurrence = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *) last_occurrence);
}

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
//     result = ft_strrchr(str, '\0');
//     if (result != NULL)
//         printf("Null terminator found at position: %ld\n", result - str);
//     else
//         printf("Null terminator not found.\n");

//     return 0;
// }
