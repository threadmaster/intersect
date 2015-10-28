
CC = gcc

OBJECTS = intersect.o det2D.o
HEADERS = headers.h
PROTOTYPES = prototypes.h 
OPT = -O

LDLIBS = -lm

intersect: $(OBJECTS) 
	$(CC) $(OBJECTS) $(LDLIBS) -o intersect

intersect.o: intersect.c $(HEADERS) $(PROTOTYPES)
	$(CC) $(OPT) intersect.c -c

det2D.o: det2D.c $(HEADERS) $(PROTOTYPES)
	$(CC) $(OPT) det2D.c -c

clean:
	rm *.o 

