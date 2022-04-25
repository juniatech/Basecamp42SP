/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:59 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:35:08 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

#include <stdio.h>
char *ft_strlowercase(char *str);
int main(){
	char string[] = "THIS USED TO BE UPPERCASE";
	char *str;
	str = string;

	char weird[] = "thishassomeUPPERCASE";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n\nBefore: %s\n", string);
	printf("After : %s\n\n", ft_strlowercase(str));
	printf("Before: %s\n", weird);
	printf("After : %s\n\n", ft_strlowercase(wei));
	printf("Empty : -%s-\n\n", ft_strlowercase(emp));
	return (0);
}