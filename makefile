build : main.o GameState.o Map.o MapTile.o
	g++ -o app.exe main.o GameState.o Map.o MapTile.o

main.o : main.cpp GameState.h
	g++ -c main.cpp

GameState.o : GameState.cpp GameState.h
	g++ -c GameState.cpp

Map.o : Map.cpp Map.h MapTile.h
	g++ -c Map.cpp

MapTile.o : MapTile.cpp MapTile.h
	g++ -c MapTile.cpp

clean : 
	del app.exe main.o GameState.o Map.o MapTile.o