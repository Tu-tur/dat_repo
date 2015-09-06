#include <stdlib.h>
#include <unistd.h>
#include "basics.h"
#include "functions.h"

char	ft_get_letter(void)
{
	char	tmp[1];
	int	ret;

	ft_putstr("Entre une lettre puis appuie sur entree pour jouer :\n");
	ret = read(0, tmp, 1);
	if (ret != -1)
		return (tmp[0]);
	return('x');
}
