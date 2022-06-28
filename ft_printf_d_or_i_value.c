/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_or_i_value.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:20:53 by aguemazi          #+#    #+#             */
/*   Updated: 2022/03/25 15:34:10 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d_or_i_value(va_list ptr)
{
	int		nbr;
	char	*string;
	int		ret;

	ret = 0;
	nbr = va_arg(ptr, int);
	string = ft_itoa(nbr);
	ret = ft_strlen(string);
	ft_putstr_fd(string, 1);
	free (string);
	return (ret);
}
