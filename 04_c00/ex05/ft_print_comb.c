/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:07:35 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/14 14:14:11 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 48;
	d = 48;
	u = 48;
	while (c <= 57)
	{
		while (d <= 57)
		{
			while (u <= 57)
			{
				if (u > d && d > c)
					ft_print_numbers(c, d, u);
				u++;
			}
			u = 48;
			d++;
		}
		d = 48;
		c++;
	}
}
