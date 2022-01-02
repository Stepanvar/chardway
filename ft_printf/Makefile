.DEFAULT_GOAL = all
NAME	::= ft_printf
SDIR	::= ./src
ODIR	::= ./bin
SRCS	::= $(shell find $(SDIR) -name '*.c')
OBJS	::= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	::= $(addsuffix .d, $(basename $(OBJS)))
CFLAGS	::= -Wall -Wextra -g $(AFL)
CC	::= gcc
.PHONY: all
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< -MD -MP
-include $(DEPS)
.PHONY: clean
clean: 
	rm -rf $(OBJS)
.PHONY: fclean
fclean: clean
	rm -rf $(NAME) $(DEPS)

