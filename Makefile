LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS =  srcs/ft_hexnbrlen.c srcs/ft_nbrlen.c srcs/ft_putstrinv_fd.c srcs/pf_putaddress.c srcs/pf_putchar.c srcs/pf_puthexnbr.c srcs/pf_putnbr.c srcs/pf_putstr.c srcs/pf_putunsignednbr.c srcs/Printf.c srcs/ft_unsignednbrlen.c
		
OBJS_C =  ft_hexnbrlen.o ft_nbrlen.o ft_putstrinv_fd.o pf_putaddress.o pf_putchar.o pf_puthexnbr.o pf_putnbr.o pf_putstr.o pf_putunsignednbr.o Printf.o ft_unsignednbrlen.o

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	gcc $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS_C) 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all