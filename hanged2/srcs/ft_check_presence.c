#include "basics.h"

int	ft_check_presence(char letter, char *wtf, char *str)
{
	int	i;
	int	success;

	i = 0;
	success = 0;
	while (str[i] != '\0')
	{
		if (str[i] == letter)
		{
			wtf[i] = str[i];
			success = 1;
		}
		i++;
	}
	return (success);
}
