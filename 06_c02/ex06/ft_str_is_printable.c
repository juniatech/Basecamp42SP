/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:52 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:34:07 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int ft_str_is_printable(char *str);
int main(){
	char string[] = "This is printable.";
	char *str;
	str = string;

	char weird[] = "Get some unprintable chars: tab (\t), beep: (\a).";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = Printable\n0 = Misterious\n\n");
	printf("%s : %d\n", string, ft_str_is_printable(str));
	printf("%s : %d\n", weird, ft_str_is_printable(wei));
	printf("Empty : %d\n\n", ft_str_is_printable(emp));
	return (0);
}