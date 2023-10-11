/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:59:49 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:34:58 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[j]) && j != 0)
		j--;
	if (i > j)
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i +1));
}

// int main(void)
// {
//     char *res;
//     char s1[] = "aaHelloaa";
//     char s2[] = "a";
//     char s3[] = "b";
//     char s4[] = "bb";
//     char s5[] = "Just Test";
//     res = ft_strtrim(s1, s2);
//     printf("Trimmed Result 1: %s|\n", res);
//     free(res);
//     res = ft_strtrim(s3, s4);
//     printf("Trimmed Result 2: %s|\n", res);
//     free(res);
//     res = ft_strtrim(s5, s4);
//     printf("Trimmed Result 3: %s\n", res);
//     free(res);
//     res = ft_strtrim(NULL, s2);
//     if (res)
//         free(res);
//     res = ft_strtrim(s5, "");
//     printf("Trimmed Result 5: %s\n", res);
//     free(res);

//     return (0);
// }