CC = gcc
CFLAGS = -std=c99 -g -Wall -fsanitize=address,undefined

test: mysh.o arraylist-dev.o
	$(CC) $(CFLAGS) $^ -o $@

mysh: mysh.o arraylist.o
	$(CC) $(CFLAGS) $^ -o $@

mysh.o arraylist.o: arraylist.h

arraylist-dev.o: arraylist.c arraylist.h
	$(CC) -c $(CFLAGS) -DSAFE -DDEBUG=2 $< -o $@

clean:
	rm -rf *.o mysh test
