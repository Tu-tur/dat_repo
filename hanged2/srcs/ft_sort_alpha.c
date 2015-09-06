#include "basics.h"

void	ft_sort_alpha(char *str)
{
	int size;
	int i;
	char swp;

	i = 0;
	size = ft_strlen(str) * ft_strlen(str);
	while (size > 0)
	{
		if (str[i] > str[i + 1]  && str[i + 1] != '\0')
		{
			swp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = swp;
		}
		size--;
		i++;
		if (i == '\0')
			i = 0;
	}
}
