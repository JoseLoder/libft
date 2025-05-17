# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/17 17:05:55 by jose-mim          #+#    #+#              #
#    Updated: 2025/05/17 17:57:45 by jose-mim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Source files
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strlcat.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
      
# Object files
OBJS = $(SRCS:.c=.o)

# Header files
HEADER = libft.h

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

# Compile source files
%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@$(RM) $(OBJS)

# Clean object files and library
fclean: clean
	@$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Non-file targets
.PHONY: all clean fclean re