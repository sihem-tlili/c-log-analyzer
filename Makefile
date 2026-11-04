CC=gcc
CFLAGS=-Wall -Wextra -std=c11

log_analyzer: main.c
	$(CC) $(CFLAGS) -o log_analyzer main.c

clean:
	rm -f log_analyzer log_analyzer.exe *.o
