#include "functions.h"
#include "basics.h"

int	ft_is_tried(char *str, char letter)
{
	int i;
	int tried;

	i = 0;
	tried = 1;
	while (str[i] != '\0')
	{
		if (str[i] == letter)
		{
			ft_putstr("\nBUG\n");
			tried = 0;
		}
		i++;
	}
	if (tried == 0)
		ft_putstr("\nTu as deja essaye cette lettre !\n");
	return (tried);
}
