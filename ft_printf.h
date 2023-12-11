/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapobia <acapobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:12:12 by acapobia          #+#    #+#             */
/*   Updated: 2023/11/14 08:47:02 by acapobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	put_char(int c);
int	put_str(char *s);
int	put_nbr(int n);
int	put_uns(unsigned int n);
int	put_hex(unsigned int n, char x);
int	check_per(char c, va_list args, int *i);
int	ft_printf(const char *format, ...);
int	put_point(size_t n);
#endif
