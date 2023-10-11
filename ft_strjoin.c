/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:50:14 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/04 12:51:57 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcpy(str + s1_len, s2);
	return (str);
}

// int main(void)
// {
//     char *s1 = "Huseyin ";
//     char *s2 = "Bulak";
//     char *result = ft_strjoin(s1, s2);
//     printf("%s\n", result);
//     free(result);
//     return 0;
// }
