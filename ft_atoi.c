/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:07:36 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 19:36:10 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\f' || *str == '\v'
		|| *str == '\r' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int main(void)
// {
// 		char * s = "0";
// 		printf("s=0 result :%i", ft_atoi(s));
// 	 	s = "";
// 		printf("s= result :%i", ft_atoi(s));
//		s = "---0";
//		printf("s=---0 result :%i", ft_atoi(s));
//		s = "-0";
//		printf("s=-0 result :%i", ft_atoi(s));
//		s = "+0";
//		printf("s=+0 result :%i", ft_atoi(s));
//		s = "----12";
//		printf("s=---12 result :%i", ft_atoi(s));
//		s = "+129";
//		printf("s=129 result :%i", ft_atoi(s));
//		s = "-129";
//		printf("s=-129 result :%i", ft_atoi(s));
//		s = "             -129";
//		printf("s=-129 result :%i", ft_atoi(s));
//		s = "-129----";
//		printf("s=-129 result :%i", ft_atoi(s));
// }