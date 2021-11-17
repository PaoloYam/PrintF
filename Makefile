# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 10:40:50 by pyammoun          #+#    #+#              #
#    Updated: 2021/11/17 12:18:10 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
	   ft_nbr.c \
	   ft_text.c


OBJS= ${SRCS:.c=.o}

CFLAGS= -Wall -Werror -Wextra
NAME = libftprintf.a

all: $(NAME)

.c.o:
	@echo Compiling $<
	gcc -c $(CFLAGS) $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@echo make $(NAME)
	ar -rcs $(NAME) $(OBJS) 

re:	fclean $(NAME)

clean:
	@echo Cleaning out those old .o
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@rm -f $(NAME)

out:
	gcc $(CFLAGS) $(SRCS)

cleanout:
	rm a.out

.PHONY:        all bonus clean fclean re out cleanout

