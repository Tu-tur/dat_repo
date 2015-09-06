#include <stdlib.h>
#include "basics.h"

char	*ft_prepare_str(char *str)
{
	char	*wtf;
	int i;

	i = 0;
	wtf = NULL;
	wtf = malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != '\0')
	{
		wtf[i] = '_';
		i++;
	}
	wtf[i] = str[i];
	return (wtf);
}
