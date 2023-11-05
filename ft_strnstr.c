/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:28 by hbulak            #+#    #+#             */
/*   Updated: 2023/11/03 13:19:48 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	needle_len = ft_strlen(needle);
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && (i + needle_len) <= len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 		const char s[10] = "hello, wo";
// 		const char n[2] = "";
// 		char	*ptr;

// 		ptr = ft_strnstr(s, n, 12);
// 		if (ptr)
// 			printf("%s\n", ptr);
// 		else
// 			printf("Not found!\n");
// 		return (0);
// }
