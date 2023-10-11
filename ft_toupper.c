/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:01:50 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:35:16 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
	return (c);
}

// int	main(void)
// {
// 		rintf("%c\n", ft_toupper('a'));
// 		printf("%c\n", ft_toupper('0'));
//     printf("%c\n", ft_toupper('z' +1));
//     printf("%c\n", toupper('z' +1));

// }