/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:55 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:34:41 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		++i;
	}
	return (str);
}

#include <stdio.h>
char *ft_strupcase(char *str);
int main(){
	char string[] = "thisis(was)alllowercase";
	char *str;
	str = string;

	char weird[] = "thishassomeUPPERCASE";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n\nBefore: %s\n", string);
	printf("After : %s\n\n", ft_strupcase(str));
	printf("Before: %s\n", weird);
	printf("After : %s\n\n", ft_strupcase(wei));
	printf("Empty : -%s-\n\n", ft_strupcase(emp));
	return (0);
}