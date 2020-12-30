build : main.o GameState.o Map.o MapTile.o
	g++ -o bin/app.exe main.o GameState.o Map.o MapTile.o

main.o : src/main.cpp src/GameState.h
	g++ -c src/main.cpp

GameState.o : src/GameState.cpp src/GameState.h
	g++ -c src/GameState.cpp

Map.o : src/Map.cpp src/Map.h src/MapTile.h
	g++ -c src/Map.cpp

MapTile.o : src/MapTile.cpp src/MapTile.h
	g++ -c src/MapTile.cpp

clean : 
	del bin\app.exe main.o GameState.o Map.o MapTile.o