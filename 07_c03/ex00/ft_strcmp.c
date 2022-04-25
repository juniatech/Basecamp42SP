/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:39:20 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/22 18:47:10 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char*s2);

int	main(void)
{
	char s1[5];
	char s2[5];
	int	ret;

	strcpy(s1, "ABCD");
	strcpy(s2, "ABCD");
	ret = ft_strcmp(s1, s2);

	if (ret < 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else if (ret > 0)
	{
		printf("A string s2 é menor e não confere\n");
	}
	else
	{
		printf("As strings conferem");
	}
	return (0);
}
*/ 