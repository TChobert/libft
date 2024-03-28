##### VARIABLES #####

## TARGET ##

NAME := libft.a

## COMPILATION ##

CC := cc

CFLAGS += -Wall
CFLAGS += -Wextra 

ifneq ($(NOERROR), true)
	CFLAGS += -Werror
endif

ifeq ($(DEBUG), true)
	DFLAGS += -g3
	ifneq ($(NOSANITIZE), true)
		DFLAGS += -fsanitize=address,undefined,leak
	endif
endif


AR := ar

ARFLAGS := rcs

## SOURCES ##

SRCS_DIR := .

SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_strlen.c
SRCS += ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_memcpy.c

vpath %.c $(SRCS_DIR)

## HEADERS ##

INCLUDES_DIR := .

HEADERS += libft.h

vpath %.h $(INCLUDES_DIR)

## OBJECTS ##

OBJS_DIR := .

OBJS := $(patsubst %.c, %.o, $(SRCS))

##### HOOKS #####

GIT_ROOT_PATH := $(shell git rev-parse --show-toplevel)

PREPUSH_FILE := $(GIT_ROOT_PATH)/.git/hooks/pre-push


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

install-hooks: install-prepush-hooks

install-prepush-hooks:
	echo "norminette" > $(PREPUSH_FILE)
	chmod +x $(PREPUSH_FILE)

.PHONY: all clean fclean re install-hooks install-prepush-hooks
