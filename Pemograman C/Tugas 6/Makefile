CC = gcc
CFLAGS = -Wall
OBJS = main.o swap.o bubble_sort.o selection_sort.o insertion_sort.o

program: $(OBJS)
	$(CC) $(CFLAGS) -o program $(OBJS)

main.o: main.c pengurutan.h
	$(CC) $(CFLAGS) -c main.c

swap.o: swap.c pengurutan.h
	$(CC) $(CFLAGS) -c swap.c

bubble_sort.o: bubble_sort.c pengurutan.h
	$(CC) $(CFLAGS) -c bubble_sort.c

selection_sort.o: selection_sort.c pengurutan.h
	$(CC) $(CFLAGS) -c selection_sort.c

insertion_sort.o: insertion_sort.c pengurutan.h
	$(CC) $(CFLAGS) -c insertion_sort.c

clean:
	rm -f *.o program luaran.txt