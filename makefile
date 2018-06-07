PROG = bin/programa
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o sapo.o pista.o in_out.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : include/sapo.hpp include/pista.hpp include/in_out.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

sapo.o : include/sapo.hpp
	$(CC) $(CPPFLAGS) -c src/sapo.cpp

pista.o : include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/pista.cpp

in_out.o : include/in_out.hpp
	$(CC) $(CPPFLAGS) -c src/in_out.cpp

clean:
	rm -f $(PROG) build/*.o

	