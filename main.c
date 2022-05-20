/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:46:04 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/05/19 15:43:45 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libftprintf.h"
#include <stdio.h>

int main (void)
{
	char *str = "cadete";
	int	 num = 123456;
	
	ft_printf("------------ String ------------\n\n");
	ft_printf("Ft = %s\n", str);
	printf("Original = %s\n\n", str);
	ft_printf("------------ Inteiro ------------\n\n");
	ft_printf("Ft = %d\n", num);
	printf("Original = %d\n\n", num);
	
	ft_printf("------------ Testes ------------\n\n");
	  int data = 29;
    printf("%x\n", data);    // just print data
    printf("%0x\n", data);   // just print data ('0' on its own has no effect)
    printf("%8x\n", data);   // print in 8 width and pad with blank spaces
    printf("%08x\n\n", data);  // print in 8 width and pad with 0's
	
ft_printf("------------ Ponteiro, X e x ------------\n\n");	
unsigned int a = 26;
unsigned int *b = &a;
printf("%p\n", b);
ft_printf("%p\n", b);
printf("%X\n", *b);
ft_printf("%X\n", *b);
printf("%x\n", *b);
ft_printf("%x\n", *b);
}