NAME = hanged

SRCS = srcs/main.c srcs/basics.c srcs/ft_add_letter.c srcs/ft_check_presence.c srcs/ft_game_over.c srcs/ft_get_letter.c srcs/ft_get_wd.c srcs/ft_prepare_str.c srcs/ft_wd_is_good.c srcs/ft_hide.c srcs/ft_lwr_case.c srcs/ft_is_tried.c srcs/ft_sort_alpha.c

HDRS = includes/

HOES = *.o

CC = gcc -o

CO = gcc -c

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :

	$(CO) $(FLAGS) -I $(HDRS) $(SRCS)
	$(CC) $(NAME) $(FLAGS) $(HOES)

clean :

	rm *.o

fclean : clean

	rm $(NAME)

re : fclean all
