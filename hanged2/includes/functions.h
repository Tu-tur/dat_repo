#ifndef FUNCTIONS_H
# define FUNCTIONS_H

char	*ft_add_letter(char *str, char c);
char	*ft_get_wd(void);
int	ft_wd_is_good(char *str);
int	ft_game_over(char *wd, char *wtf);
char	*ft_prepare_str(char *str);
int	ft_check_presence(char letter, char *wtf, char *str);
char	ft_get_letter(void);
void	ft_hide(void);
void	ft_lwr_case(char *str);
int	ft_is_tried(char *str, char letter);
void	ft_sort_alpha(char *str);

#endif
