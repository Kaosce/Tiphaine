##
## Makefile for Makefile in /home/TiphaineLaurent/106bombyx
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Mon Feb  6 10:24:14 2017 Tiphaine LAURENT
## Last update Mon Feb  6 11:55:52 2017 Tiphaine LAURENT
##

CC	=	cc

CFLAGS	+=	-W -Wall
CFLAGS	+=	-ansi -pedantic

LDFLAGS	+=	-I. -lmy -llibprintf -L.

RM	=	rm -f

NAME	=	106bombyx

SRCS	=	106.c

OBJS	=	$(SRCS:.c=.o)


all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS) -lm

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
