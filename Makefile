##
## Makefile<2> for  in /home/karst_j/printf/lib
##
## Made by Julien Karst
## Login   <karst_j@epitech.net>
##
## Started on  Wed Nov 12 15:15:16 2014 Julien Karst
## Last update Thu Nov 27 15:50:10 2014 Julien Karst
##


NAME	= my_ls

CC 	= gcc

CFLAGS	= -I./include

LDFLAGS	= -L./lib -lmy

SCR	= main.c \
	  my_ls.c \

OBJ	= $(SCR:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
