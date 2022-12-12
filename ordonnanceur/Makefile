CC=gcc
FLAGS=-Wall -g
BINS=ordonnanceurs prog
all:ordonnanceurs


ordonnanceurs : fonctions.o ordonnanceurs.o
	$(CC) $(FLAGS) $^ -o $@

fonctions.o : fonctions.c
	$(CC) -c $(FLAGS) $^ -o $@ 
	
ordonnanceurs.o : ordonnanceurs.c 
	$(CC) -c $(FLAGS) $^ -o $@

clean:
	rm *.o $(BINS)