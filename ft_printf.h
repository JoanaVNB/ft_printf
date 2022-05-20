/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:20:31 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/05/19 21:52:49 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <stddef.h>

# define HEX_BASE_LOWER	"0123456789abcdef"
# define HEX_BASE_UPPER	"0123456789ABCDEF"

// libft

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);

// utils

int		print_char(char c);
int		print_str(char *str);
int		print_nbr(int nbr);
int		print_nbr_u(unsigned int nbr);

// uitoa

char	*ft_uitoa(unsigned int n);

// itoa

char	*itoa_base(unsigned long long n, char *base);

// ptr

int		print_ptr(void *ptr);

// hex

int		print_hex_lower(unsigned int value);
int		print_hex_upper(unsigned int value);

// print

int		print_format(va_list args, const char format);
int		ft_printf(const char *str, ...);

#endif