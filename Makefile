TARGET :=$(arg1)

SRC := $(TARGET).c
OBJ := $(TARGET).o



CFLAGS := -g -Wall
#LFLAGS := -lpthread
CC := gcc $(CFLAGS)


all: $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) -o $@ $(SRC) -L. -ldlink


.c.o:
	$(CC) -c $^

clean:
	rm -f $(TARGET) $(OBJ)



