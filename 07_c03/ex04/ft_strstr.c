#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*i_str;
	char	*i_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i_str = str;
		i_find = to_find;
		while (*i_str == *i_find && *i_find != '\0' && *i_str != '\0')
		{
			i_find++;
			i_str++;
		}
		if (*i_find == '\0')
			return (str);
		str++;
	}
	return (0);
}

int main()
{
  char haystack[] = "A palavra procurada é casa. A função retorna toda a string da palavra encontrada até o fim.¨;
  char needle[] = "casa";
  
  printf("%s\n¨, ft_strstr(haystack, needle));
}
