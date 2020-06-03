parametrosCompilacao=-Wall #-Wshadow
nomePrograma=grafos

all: $(nomePrograma)

$(nomePrograma): main.o Vertice.o Aresta.o 
	g++ -o $(nomePrograma) main.o Vertice.o Aresta.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Vertice.o: Vertice.hpp Vertice.cpp
	g++ -c Vertice.cpp $(parametrosCompilacao)

Aresta.o: Aresta.hpp Aresta.cpp
	g++ -c Aresta.cpp $(parametrosCompilacao)

clean:
	rm *.o *.gch $(nomePrograma)