CC = gcc
CFLAGS = -Wall -g

OBJS = main.o Fact.o Pal.o Big3.o

main: $(OBJS)
	$(CC) $(CFLAGS) -o main $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o main

