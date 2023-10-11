/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:48:22 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:30:50 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// void to_upper(unsigned int index, char *c) {
//     if (*c >= 'a' && *c <= 'z') {
//         *c = *c - 'a' + 'A';
//     }
// }

// int main() {
//     char test_string[] = "hello";
//     printf("Original: %s\n", test_string);

//     ft_striteri(test_string, to_upper);

//     printf("Modified: %s\n", test_string);
//     return 0;
// }