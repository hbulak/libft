/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:39:13 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/04 12:39:43 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == 0)
	{
		ft_putstr_fd("0", fd);
		return ;
	}
	else if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0)
		n *= -1;
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd('0' + n % 10, fd);
}

// int main()
// {
//     int fd = open("a.txt", O_WRONLY);
//     if (fd < 0) return 1;
//     ft_putnbr_fd(54321, fd);
//     ft_putchar_fd('\n', fd);
//     close(fd);
//     return 0;
// }