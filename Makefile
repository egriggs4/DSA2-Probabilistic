CXX = g++
CXXFLAGS = -std=c++11 -Wall
     
OBJS = main.o createBatches.o

main : ${OBJS}
	${CXX} $(CXXFLAGS) -o $@ ${OBJS}

RUN: main.o 
	./main

clean :
	rm ${OBJS} main
	rm ds*