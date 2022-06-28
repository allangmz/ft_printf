SRCS	=	ft_printf.c ft_printf_c_value.c ft_printf_d_or_i_value.c ft_printf_p_value.c ft_printf_percent_value.c ft_printf_s_value.c ft_printf_putnbr_base.c ft_printf_putnbr_base2.c ft_printf_putuns_fd.c

OBJS	= $(SRCS:.c=.o)

GCC		=	gcc

RM		=	rm -rf

FLAGS	=	-Wall -Werror -Wextra

NAME	=	libftprintf.a

.c.o:
		$(GCC) $(FLAGS) -c -I./src $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
			$(MAKE) -C Libft
			cp Libft/libft.a $(NAME)
			ar rcs $@ $^
			# $(GCC) $(FLAGS) main.c $(NAME)
			# ./a.out

all:		$(NAME)

clean:
			$(MAKE) clean -C Libft
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) fclean -C Libft
			$(RM) $(NAME) a.out

re:			fclean all

.PHONY:		all clean fclean re