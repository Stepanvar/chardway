#.DEFAULT_GOAL = all
NAME	::= project
SDIR	::= ./src
ODIR	::= ./bin
DDIR	::= ./inc
SRCS	::= $(shell find $(SDIR) -name '*.c' -print)
OBJS	::= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(OBJS:$(ODIR)/%.o=$(DDIR)/%.d)
CC	::= gcc
CFLAGS	::= -Wall -Wextra -g $(AFL)
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< -MP -MMD
-include $(DEPS)
.PHONY: clean
clean:
	rm -rf $(NAME) $(OBJS) $(DEPS)
