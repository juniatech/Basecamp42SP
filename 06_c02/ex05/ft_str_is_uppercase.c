/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:49 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:33:21 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			x = 0;
		i++;
	}
	return (x);
}

#include <stdio.h>
int ft_str_is_uppercase(char *str);
int main(){
	char string[] = "THISISALLUPPERCASE";
	char *str;
	str = string;

	char weird[] = "thishassomelowercase";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = All uppercase\n0 = Other cases\n\n");
	printf("%s : %d\n", string, ft_str_is_uppercase(str));
	printf("%s : %d\n", weird, ft_str_is_uppercase(wei));
	printf("Empty : %d\n\n", ft_str_is_uppercase(emp));
	return (0);

}