#include "basics.h"

void	ft_draw(int life)
{	if (life == 15)
		return;
	if (life == 14)
	{
		ft_putstr("_____\n\n");
	}
	if (life == 13)
	{
		ft_putstr("  |\n");
		ft_putstr("  |\n");
		ft_putstr("  |\n");
		ft_putstr("  |\n");
		ft_putstr("_____\n\n");
	}
	if (life == 12)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/\n");
		ft_putstr("  |\n");
		ft_putstr("  |\n");
		ft_putstr("  |\n");
		ft_putstr("_____\n\n");
	}
	if (life == 11)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |\n");
		ft_putstr("  |\n");
		ft_putstr("_____\n\n");
	
	}
	if (life == 10)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |   |\n");
		ft_putstr("  |\n");
		ft_putstr("_____\n\n");
	}
	if (life == 9)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |  /|\n");
		ft_putstr("  |\n");
		ft_putstr("_____\n\n");
	
	}
	if (life == 8)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |\n");
		ft_putstr("_____\n\n");
	
	}
	if (life == 7)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  /\n");
		ft_putstr("_____\n\n");
	
	}
	if (life == 6)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  / \\\n");
		ft_putstr("_____\n\n");
	
	}
	if (life == 5)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |   o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  /i\\\n");
		ft_putstr("_____\n\n");
	}
	if (life == 4)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |  -o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  /i\\\n");
		ft_putstr("_____\n\n");
	}
	if (life == 3)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |  -o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  /i\\\n");
		ft_putstr("_____		\\\n\n");
	
	}
	if (life == 2)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |  -o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  /i\\\n");
		ft_putstr("_____		\\o\n\n");
	}
	if (life == 1 || life == 0)
	{
		ft_putstr("  _____\n");
		ft_putstr("  |/  |\n");
		ft_putstr("  |  -o\n");
		ft_putstr("  |  /|\\\n");
		ft_putstr("  |  /i\\\n");
		ft_putstr("_____		\\o/\n\n\n");
	}
}
