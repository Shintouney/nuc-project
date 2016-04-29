##########################
##	shinta42@hotmail.fr ##
##########################
CC = gcc

NAME = rasp_client_bin

PATHS = srcs/

PATH_LIB = lib/

SRCS = $(PATHS)main.c \
			 $(PATHS)$(PATH_LIB)my_putstr.c

RM = rm -f

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
				$(CC)	-c -o $(NAME)
