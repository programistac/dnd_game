CC = gcc
CFLAGS = -O2

SRC = src/*.c
TARGET = server

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
