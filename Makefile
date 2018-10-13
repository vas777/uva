CC = gcc 
CFLAGS = -Wall -Wextra -O2 -g -pipe
LIBS = -lm -lcrypt
RM = rm -f 
TARGET = res.out # target lib

SRCS = 884.c  # source files
OBJS = $(SRCS:.c=.o)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

.PHONY: clean
clean:
	-$(RM) $(TARGET) *.o