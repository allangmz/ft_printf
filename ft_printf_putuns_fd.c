/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putuns_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:10:39 by aguemazi          #+#    #+#             */
/*   Updated: 2022/03/25 15:36:20 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putuns_fd(unsigned int nbr, int fd, int *i)
{
	if (nbr >= 10)
	{
		ft_printf_putuns_fd(nbr / 10, fd, i);
		ft_putchar_fd((nbr % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((nbr + '0'), fd);
	*i = *i + 1;
}
