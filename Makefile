CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -L./minilibx -lmlx_Linux -lXext -lX11 -lm -lz
RM = rm -rf
MKDIR = mkdir -p

SRCSDIR = srcs/
OBJSDIR = objs/
SRCS = $(addprefix $(SRCSDIR), fractol.c frames.c colors.c)
OBJS = $(patsubst $(SRCSDIR)%.c, $(OBJSDIR)%.o, $(SRCS))
MINILIBX = libmlx_Linux.a
NAME = fract-ol

all: $(NAME)

objsdir:
	$(MKDIR) $(OBJSDIR)

$(OBJSDIR)%.o: $(SRCSDIR)%.c | objsdir
	$(CC) $(CFLAGS) -c -o $@ $^

$(NAME): $(OBJS)
	make -C minilibx
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

clean:
	make -C minilibx clean
	$(RM) $(OBJSDIR) $(MINILIBX)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re