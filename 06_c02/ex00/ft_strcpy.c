/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregina- <jregina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:38:30 by jregina-          #+#    #+#             */
/*   Updated: 2022/04/21 05:27:35 by jregina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(){
	char source[] = "This is a source string.";
//	char *src;
//	src = source;
	char destiny[] = "This is a destiny string.";
	char *dest;
	printf("\nBefore:\nSource: %s\nDestinty: %s", source, destiny);
    dest = ft_strcpy(destiny, source);
	printf("\nAfter (must be source string):\n%s\n\n", dest);
	return (0);
}