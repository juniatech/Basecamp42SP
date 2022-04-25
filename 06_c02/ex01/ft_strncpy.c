/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:34 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:28:12 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *dest;
	char source_val[] = "This is source. YYYYYYYYYY";
	char just_something[] = "Just a string to hold a place. XXXXXXXXXX";
	char *src;
	char *destiny;
	dest = just_something;
	src = source_val;
	destiny = ft_strncpy(dest, src, 10);
	printf("\n\n10:---%s---",destiny);
	destiny = ft_strncpy(dest, src, 20);
	printf("\n20:---%s---",destiny);
	destiny = ft_strncpy(dest, src, 30);
	printf("\n30:---%s---",destiny);
	destiny = ft_strncpy(dest, src, 40);
	printf("\n40:---%s---\n\n",destiny);
	return (0);
}