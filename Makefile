# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 16:47:32 by mabriand          #+#    #+#              #
#    Updated: 2022/05/31 16:57:28 by mabriand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

##################################### PATH #####################################

CHAR = src/char/
CONVERT = src/convert/
LIST = src/list/
MEMORY = src/memory/
NBR = src/nbr/
OUTPUT = src/output/
STRING = src/string/

#################################### SOURCES ###################################

#-------------------------------CHAR-#
SRCS += $(CHAR)ft_isalpha.c		$(CHAR)ft_isdigit.c		$(CHAR)ft_isalnum.c \
		$(CHAR)ft_isascii.c		$(CHAR)ft_isprint.c		$(CHAR)ft_toupper.c \
		$(CHAR)ft_tolower.c		$(CHAR)ft_isspace.c

#----------------------------CONVERT-#
SRCS += $(CONVERT)ft_atoi.c		$(CONVERT)ft_itoa.c		$(CONVERT)ft_uitoa.c

#-------------------------------LIST-#
SRCS += $(LIST)ft_lstnew.c		$(LIST)ft_lstsize.c		$(LIST)ft_lstadd_back.c \
		$(LIST)ft_lstclear.c	$(LIST)ft_lstiter.c		$(LIST)ft_lstmap.c \
		$(LIST)ft_lstdelone.c	$(LIST)ft_lstlast.c		$(LIST)ft_lstadd_front.c

#-----------------------------MEMORY-#
SRCS += $(MEMORY)ft_memset.c	$(MEMORY)ft_bzero.c		$(MEMORY)ft_memcpy.c \
		$(MEMORY)ft_memccpy.c	$(MEMORY)ft_memmove.c	$(MEMORY)ft_memchr.c \
		$(MEMORY)ft_memcmp.c	$(MEMORY)ft_calloc.c

#--------------------------------NBR-#
SRCS += $(NBR)ft_intlen.c		$(NBR)ft_uintlen.c		$(NBR)ft_hexintlen.c \
		$(NBR)ft_long_hexintlen.c

#-----------------------------OUTPUT-#
SRCS += $(OUTPUT)ft_putchar_fd.c						$(OUTPUT)ft_putnbr_fd.c \
		$(OUTPUT)ft_putstr_fd.c							$(OUTPUT)ft_putendl_fd.c \
		$(OUTPUT)ft_putstr.c

#-----------------------------STRING-#
SRCS += $(STRING)ft_strlen.c	$(STRING)ft_strchr.c	$(STRING)ft_strrchr.c \
		$(STRING)ft_strncmp.c	$(STRING)ft_strlcpy.c	$(STRING)ft_strlcat.c \
		$(STRING)ft_strnstr.c	$(STRING)ft_strdup.c	$(STRING)ft_strtrim.c \
		$(STRING)ft_strmapi.c	$(STRING)ft_strjoin.c 	$(STRING)ft_split.c \
		$(STRING)ft_substr.c	$(STRING)ft_strndup.c	$(STRING)ft_strcpy.c \
		$(STRING)ft_strncpy.c	$(STRING)ft_strcmp.c

##################################### BASIC ####################################

CFLAGS 	= -Wall -Wextra -Werror

CC		= gcc

INC		= inc/

HEADER	= $(INC)libft.h

OBJS	= $(SRCS:.c=.o)

##################################### RULES ####################################

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	ar	rc ${NAME} ${OBJS}

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
