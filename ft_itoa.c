/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:15:27 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/11 20:48:26 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_count(int n)
{
	long long	num;
	int			count;

	count = 0;
	num = (long long)n;
	if (n < 0)
	{
		count++;
		num = -num;
	}
	while (num > 10)
	{
		count++;
		num /= 10;
	}
	return (count);
}

static void	ft_fill(long long n, char *a, int count)
{
	if (n >= 10)
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
	a = (char *)malloc(sizeof(char) * (count + 1));
	if (!a)
		return (NULL);
	if (n < 0)
	{
		a[0] = '-';
		num = -num;
	}
	a[count + 1] = '\0';
	ft_fill(num, a, count);
	return (a);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main() {
    // int number = INT_MIN;

    // char standard_str[50];
    // sprintf(standard_str, "%d", number);

    // char *custom_str = ft_itoa(number);

    // if (strcmp(standard_str, custom_str) == 0) {
    //     printf("Both functions produced the same output!\n");
    // } else {
    //     printf("The functions produced different outputs!\n");
    // }
	// printf("%s %zu", ft_itoa(INT_MIN), strlen(ft_itoa(INT_MIN)));
	// system("leaks a.out");
    // free(custom_str);
//     return 0;
// }