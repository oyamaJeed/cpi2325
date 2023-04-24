NAME :=libdlink.so 
SRCS := display.c
OBJS := $(SRCS:.c=.o)


CFLAGS := -shared
LFLAGS := -lm -pthread
CC := gcc 




$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(LFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)



