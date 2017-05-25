##
## Makefile for Makefile in /home/TiphaineLaurent/106bombyx
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Mon Feb  6 10:24:14 2017 Tiphaine LAURENT
## Last update Thu May 25 15:38:12 2017 Tiphaine LAURENT
##

CC		=	gcc

CFLAGS		=	-W -Wall
CFLAGS		+=	-ansi -pedantic
CPPFLAGS	=	-I ./include

LDFLAGS		=	-lm

RM		=	rm -f

NAME		=	106bombyx

SRC_DIR		=	src/
SRC_FILES	=	106.c
SRCS		=	$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJS		=	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
