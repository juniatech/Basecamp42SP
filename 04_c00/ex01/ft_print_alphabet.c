/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:28:05 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/13 17:31:34 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	print_alphabet;

	print_alphabet = 'a';
	while (print_alphabet <= 'z')
	{
		ft_putchar(print_alphabet);
		print_alphabet++;
	}
}
