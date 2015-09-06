#include "basics.h"
#include "functions.h"

int	ft_game_over(char *wd, char *wtf)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (wd[i] != '\0')
	{
		if (wd[i] != wtf[i])
			check = 0;
		i++;
	}
	if (check == 1)
	{
		ft_hide();
		ft_putstr("\n\n\n===>VICTOIRE !!!<===\n\n\nLe mot mystere etait :	--> ");
		ft_putstr(wd);
		ft_putchar('\n');
	}
	return (check);
}
