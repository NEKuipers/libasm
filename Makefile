# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nkuipers <nkuipers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/23 11:51:03 by nkuipers      #+#    #+#                  #
#    Updated: 2020/07/23 14:07:06 by nkuipers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =		libasm.a
SRCS =		ft_strcmp.s \
			ft_strlen.s
# 			ft_strcpy.s \
# 			ft_strdup.s \
# 			ft_read.s \
# 			ft_write.s
OBJECTS = 	$(SRCS:.s=.o)
INCLUDES =	libasm.h

# COLOURS
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m

all: $(NAME)

%.o: %.s
	@echo "$(WHITE)Compiling: $<"
	@nasm -f macho64 $< -o $@ -I$(INCLUDES)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "$(GREEN)Done"

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
