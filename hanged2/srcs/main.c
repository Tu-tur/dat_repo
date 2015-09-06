#include <stdlib.h>
#include "basics.h"
#include "functions.h"

int	main(void)
{
	char	*wd;
	char	*wtf;
	char	letter;
	int	life;
	int	success;
	char	*tried;

	while(ft_wd_is_good(wd) != 1)
	{
		wd = ft_get_wd();
	}
	ft_lwr_case(wd);
	tried = malloc(sizeof(char));
	wtf = ft_prepare_str(wd);
	ft_hide();
	life = 15;
	while (ft_game_over(wd, wtf) != 1 && life > 0)
	{
		ft_hide();
		ft_draw(life);
		ft_putstr("Il te reste ");
		ft_putnbr(life);
		ft_putstr(" vies\n");
		ft_putstr("Voici les lettres que tu as deja essaye :\n");
		ft_putstr(tried);
		ft_putstr("\n\n");
		ft_putstr("======>	");
		ft_putstr(wtf);
		ft_putstr("<======\n");
		letter = ft_get_letter();
		if ((letter >= 'a' && letter <= 'z') || letter == '-')
		{
			if (ft_is_tried(tried, letter))
				success = ft_check_presence(letter, wtf, wd);
			if (ft_check_presence(letter, wtf, tried) == 0)
				tried = ft_add_letter(tried, letter);
			if (success == 0)
				life--;
		}
		ft_sort_alpha(tried);
	}
	if (life == 0)
	{
		ft_hide();
		ft_draw(life);
		ft_putstr("		PERDU !\n\n\n");
		ft_putstr("	Le mot mystere etait ==>	");
		ft_putstr(wd);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putchar('\n');
	}
	return (0);
}
