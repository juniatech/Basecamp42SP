/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:38 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:29:10 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			if ((str[i] < 97) || (str[i] > 122))
				x = 0;
		i++;
	}
	return (x);
}

#include <stdio.h>
int ft_str_is_alpha(char *str);
int main(){
	char string[] = "Thisisjustamockstring";
	char *str;
	str = string;

	char weird[] = "Thís ïz $a$ #weird# @@@ string!!!";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = Alphabetical\n0 = Weird\n\n");
	printf("%s : %d\n", string, ft_str_is_alpha(str));
	printf("%s : %d\n", weird, ft_str_is_alpha(wei));
	printf("Empty : %d\n\n", ft_str_is_alpha(emp));

	return (0);
}