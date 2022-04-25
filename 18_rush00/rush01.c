/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:23:20 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/10 16:15:39 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char first, char mid, char last)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
		{
			ft_putchar(first);
		}
		else if (column == x)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(mid);
		}
		column++;
	}
}

void	loop_line(int line, int x, int y)
{
	if (line == 1)
	{
		print_line(x, '/', '*', '\\');
	}
	else if (line == y)
	{
		print_line(x, '\\', '*', '/');
	}
	else
	{
		print_line(x, '*', ' ', '*');
	}
}

void	rush(int x, int y)
{
	int	line;

	if (x < 1 || y < 1)
	{
		return ;
	}
	line = 1;
	while (line <= y)
	{
		loop_line(line, x, y);
		ft_putchar('\n');
		line++;
	}
}
