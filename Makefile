##### VARIABLES #####

## TARGET ##

NAME := libft.a

## COMPILATION ##

CC := cc

CFLAGS += -Wall
CFLAGS += -Wextra 
CFLAGS += -Werror

ifeq ($(DEBUG), true)
	DFLAGS += -g3
	DFLAGS += -fsanitize=address,undefined,leak
endif

AR := ar

ARFLAGS := rcs

## SOURCES ##

SRCS_DIR := .

SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c

vpath %.c $(SRCS_DIR)

## HEADERS ##

INCLUDES_DIR := .

HEADERS += libft.h

vpath %.h $(INCLUDES_DIR)

## OBJECTS ##

OBJS_DIR := .

OBJS := $(patsubst %.c, %.o, $(SRCS))

##### RULES #####

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(OBJS): $(OBJS_DIR)/%.o: %.c $(HEADERS) | $(OBJS_DIR)  # pattern rule
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

$(OBJS_DIR):
	@mkdir $(OBJS_DIR) 2>/dev/null || true # 2 is an ionumber

clean:
	$(RM) $(OBJS)
	@rmdir $(OBJS_DIR) 2>/dev/null || true

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
