/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:34:36 by aguemazi          #+#    #+#             */
/*   Updated: 2022/03/25 15:33:07 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printf_c_value(va_list ptr);
int		ft_printf_d_or_i_value(va_list ptr);
int		ft_printf_p_value(va_list ptr);
int		ft_printf_percent_value(void);
int		ft_printf_s_value(va_list ptr);
void	ft_printf_putnbr_base2(unsigned long int nbr, const char *base, int *i);
void	ft_printf_putnbr_base(unsigned int nbr, const char *base, int *i);
void	ft_printf_putuns_fd(unsigned int nbr, int fd, int *i);
#endif