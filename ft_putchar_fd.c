/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:38:46 by hbulak            #+#    #+#             */
/*   Updated: 2023/10/04 12:38:49 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
}

// int main()
// {
//     int fd = open("a.txt", O_WRONLY);
//     if (fd < 0) return 1;
//     // ft_putnbr_fd(54321, fd);
//     ft_putchar_fd('2', fd);
//     ft_putchar_fd('\n', fd);
//     close(fd);
//     return 0;
// }