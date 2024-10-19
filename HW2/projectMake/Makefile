CC = gcc
CFLAGS = -Wall -g

TARGET = myprogram

$(TARGET): main.o util.o
	$(CC) $(CFLAGS) -o $(TARGET) util.o main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

util.o: util.c
	$(CC) $(CFLAGS) -c util.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o myprogram
