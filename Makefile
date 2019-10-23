# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 18:42:05 by mirivera          #+#    #+#              #
#    Updated: 2019/10/23 00:01:12 by mirivera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLOR OUTPUT OPIONS
RED		=\033[0;31m
GREEN	=\033[0;32m
YELLOW	=\033[0;33m
BLUE	=\033[0;34m
MAG		=\033[0;35m
NC		=\033[0m

NAME = libft.a

HEADERS = libft.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBFT_SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_itoa.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_freecpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strndup.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c \
	get_next_line.c \
	ft_prefixchar.c \
	ft_prependchar.c \
	ft_srch_rep.c \
	ft_strrev.c \
   	ft_long_itoa.c \
	ft_ullitoa.c \
	ft_uitoa.c \
	ft_uitoa_base.c \
	ft_uitoa_base_up.c \
	ft_insertchar.c \
	ft_intputchar.c \
	ft_intputstr.c \
	ft_llitoa.c \
	ft_llitoa_base.c \
	ft_itoa_base.c \
	ft_itoa_base_up.c \
	ft_numlen.c \
	ft_intputchar_fd.c \
	ft_intputstr_fd.c \
	ft_chartobits.c \
	ft_strtobinary.c \

SRCS = ft_printf.c \
	parser.c \
	reset_struct.c \
	supportfuncs.c \
	supportpars.c \
	cssupport.c \
	cssupport2.c \

CONV = conversion.c \
	specconversion.c \
	c_conv.c \
	s_conv.c \
	dui_conv.c \
	o_conv.c \
	xbx_conv.c \
	p_conv.c \
	f_conv.c \
	b_conv.c \

FORM = c_form.c \
	s_form.c \
	p_form.c \
	dui_form.c \
	xbx_form.c \
	xbx_form2.c \
	xbx_form3.c \
	o_form.c \
	o_form2.c \
	per_form.c \

CKSIGN = dui_sign.c \
	invpf_check.c \
	plusf_check.c \

OBJECTS = $(patsubst %.c,%.o,$(SRCS))
OBJECTS += $(patsubst %.c,%.o,$(LIBFT_SRCS))
OBJECTS += $(patsubst %.c,%.o,$(CONV))
OBJECTS += $(patsubst %.c,%.o,$(FORM))
OBJECTS += $(patsubst %.c,%.o,$(CKSIGN))

ALLF = $(addprefix ft_printf/srcs/,$(SRCS)) $(addprefix ft_printf/conv/,$(CONV)) $(addprefix ft_printf/form/,$(FORM)) $(addprefix ft_printf/checksign/,$(CKSIGN)) $(addprefix ./,$(LIBFT_SRCS))

all: $(NAME)

$(NAME):
	@#echo 'Building your Libft...'
	@printf "[$(GREEN)$(NAME)$(NC)]\t[$(BLUE)...$(NC)]\r" #PRINT
	@$(CC) $(CFLAGS) -c $(ALLF) -I $(HEADERS)
	@ar rc $(NAME) $(OBJECTS)
	@#echo 'Optimizing your Libft...'
	@ranlib $(NAME)
	@#echo 'Your Libft has been created.'
	@printf "[$(GREEN)$(NAME)$(NC)]\t[$(BLUE)DONE!$(NC)]\n" #PRINT

clean:
	@rm -rf a.out*
	@rm -rf debug*
	@rm -rf *.dysm
	@rm -rf $(OBJECTS)

fclean:	clean
	@echo 'Removing your Libft...'
	@rm -rf $(NAME)

re:	fclean all

.PHONY: make all clean fclean re
