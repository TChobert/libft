##### VARIABLES #####

## TARGET ##

NAME := libft.a

## COMPILATION ##

CC := cc

CFLAGS += -Wall
CFLAGS += -Wextra 
CFLAGS += -Werror
# CFLAGS += -fsanitize=address,undefined -g3

AR := ar

ARFLAGS := rcs

## SOURCES ##

SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_strlen.c
SRCS += ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_memjoin.c
SRCS += ft_strlcpy.c
SRCS += ft_strlcat.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strchr.c
SRCS += ft_strrchr.c
SRCS += ft_strncmp.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_strcat.c
SRCS += ft_strnstr.c
SRCS += ft_atoi.c
SRCS += ft_calloc.c
SRCS += ft_strdup.c
SRCS += ft_strcpy.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_split.c
SRCS += ft_sswap.c
SRCS += ft_swap_int.c
SRCS += ft_swap_char.c
SRCS += ft_itoa.c
SRCS += ft_ltoa_base.c
SRCS += ft_ultoa_base.c
SRCS += ft_strmapi.c
SRCS += ft_striteri.c
SRCS += ft_striter.c
SRCS += ft_putchar.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putnbr_hexa.c

## BONUS ##

BONUS += ft_lstnew_bonus.c
BONUS += ft_lstadd_front_bonus.c
BONUS += ft_lstsize_bonus.c
BONUS += ft_lstlast_bonus.c
BONUS += ft_lstadd_back_bonus.c
BONUS += ft_lstdelone_bonus.c
BONUS += ft_lstclear_bonus.c
BONUS += ft_lstiter_bonus.c
BONUS += ft_lstmap_bonus.c

## HEADERS ##

HEADERS += libft.h

vpath %.h $(INCLUDES_DIR)

## OBJECTS ##

OBJS := $(patsubst %.c, %.o, $(SRCS))

## OBJECTS BONUS ##

OBJS_BONUS := $(patsubst %.c, %.o, $(BONUS))

##### RULES #####

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus: $(OBJS_BONUS) $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADERS)

$(OBJS_BONUS): %.o: %.c $(HEADERS)
	$(CC) $(CFALGS) -c $< -o $@ -I $(HEADERS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
