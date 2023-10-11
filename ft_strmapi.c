/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:55:25 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:30:14 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			count;
	char			*str;

	if (!s || !f)
		return (NULL);
	count = ft_strlen(s);
	str = malloc((sizeof(char) * count) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char to_upper(unsigned int index, char c) {
//     if (c >= 'a' && c <= 'z') {
//         return c - 'a' + 'A';
//     }
//     return c;
// }

// int main() {
//     const char *test_string = "hello";
//     char *result = ft_strmapi(test_string, to_upper);
//     if(result) {
//         printf("Original: %s\n", test_string);
//         printf("Mapped: %s\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed\n");
//     }
//     return 0;
// }