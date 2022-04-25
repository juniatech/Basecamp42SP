/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:46 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:32:54 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
			x = 0;
		i++;
	}
	return (x);
}

#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(){
	char string[] = "thisisalllowercase";
	char *str;
	str = string;

	char weird[] = "thishassomeUPPERCASE";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = All lowercase\n0 = Other cases\n\n");
	printf("%s : %d\n", string, ft_str_is_lowercase(str));
	printf("%s : %d\n", weird, ft_str_is_lowercase(wei));
	printf("Empty : %d\n\n", ft_str_is_lowercase(emp));
	return (0);
}