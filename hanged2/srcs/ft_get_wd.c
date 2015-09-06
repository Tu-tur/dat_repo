#include <unistd.h>
#include <stdlib.h>
#include "basics.h"
#include "functions.h"

char	*ft_get_wd(void)
{
	char	*wd;
	char	tmp[2];
	int	ret;

	ret = 0;
	wd = malloc(sizeof(char));
	ft_putstr("\n\nEntre un mot pour jouer :\ntiret -> OK\nMAJ/min -> OK\nespaces/chiffres -> NOPE\nctrl+d 2x pour valider\n");
	while ((ret = read(0, tmp, 1)) > 0)
	{
		if (('a' <= tmp[0] && tmp[0] <= 'z') || tmp[0] == '-')
			wd = ft_add_letter(wd, tmp[0]);
	}
	return (wd);
	
}
