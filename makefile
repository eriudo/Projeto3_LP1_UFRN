PROG = Proj3
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o circuito.o corrida.o sapo.o 

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

circuito.o: circuito.hpp
	$(CC) $(CPPFLAGS) -c circuito.cpp

corrida.o: corrida.hpp
	$(CC) $(CPPFLAGS) -c corrida.cpp

sapo.o: sapo.hpp
	$(CC) $(CPPFLAGS) -c sapo.cpp

clean:
	rm -f *.o