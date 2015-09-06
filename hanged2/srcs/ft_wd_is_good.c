#include "basics.h"

int	ft_wd_is_good(char *str)
{
	int	i;
	int	wd_ok;

	i = 0;
	wd_ok = 1;
	while(str[i] != '\0')
	{
		if (str[i] != '-' && (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
			wd_ok = 0;
		i++;
	}
	return (wd_ok);
}
