CC = gcc
CFLAGS = -Wall -g

TARGET = myprogram

$(TARGET): main.o util.o bar.o
	$(CC) $(CFLAGS) -o $(TARGET) util.o bar.o main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

util.o: util.c
	$(CC) $(CFLAGS) -c util.c

bar.o: bar.c
	$(CC) $(CFLAGS) -c bar.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o myprogram
