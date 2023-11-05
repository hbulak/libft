/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:15:27 by hbulak            #+#    #+#             */
/*   Updated: 2023/11/02 19:20:35 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_count(int n)
{
	long long	num;
	int			count;

	count = 1;
	num = (long long)n;
	if (n < 0)
	{
		count++;
		num = -num;
	}
	while (num >= 10)
	{
		count++;
		num /= 10;
	}
	return (count);
}

static void	ft_fill(long long n, char *a, int count)
{
	if (n > 9 || n < 0)
		ft_fill(n / 10, a, count - 1);
	a[count] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int			count;
	char		*a;
	long long	num;

	num = (long long)n;
	count = ft_count(n);
	a = malloc(sizeof(char) * (count + 1));
	if (!a)
		return (NULL);
	if (n < 0)
	{
		a[0] = '-';
		num = -num;
	}
	a[count] = '\0';
	ft_fill(num, a, count - 1);
	return (a);
}
// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
// 	int i = INT_MAX;
// 	char *s = ft_itoa(i);
// 	printf("%s", s);
// }