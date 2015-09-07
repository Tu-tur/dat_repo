#include <stdlib.h>
#include "basics.h"

char	*ft_add_letter(char *str, char c)
{
	char	*cat_str;

	cat_str = malloc(sizeof(char) * (ft_strlen(str) + 2));
	ft_strcpy(cat_str, str);
	cat_str[ft_strlen(str)] = c;
	cat_str[ft_strlen(str) + 1] = '\0';
	return (cat_str);
}
