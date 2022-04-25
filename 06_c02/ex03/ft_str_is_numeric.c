/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:43 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:29:58 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			x = 0;
		i++;
	}
	return (x);
}

#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(){
	char string[] = "64826841651";
	char *str;
	str = string;

	char weird[] = "68426482A";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = Numerical\n0 = Not numerical\n\n");
	printf("%s : %d\n", string, ft_str_is_numeric(str));
	printf("%s : %d\n", weird, ft_str_is_numeric(wei));
	printf("Empty : %d\n\n", ft_str_is_numeric(emp));
	return (0);
}