/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:39:23 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/22 19:09:58 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[15];
	char	s2[15];
	int		ret;

	strcpy(s1, "abcd");
	strcpy(s2, "ABCD");

	ret = ft_strncmp(s1, s2, 4);

	if (ret < 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else if (ret > 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else
	{
		printf("As strings conferem\n");
	}
	return (0);
}
*/ 