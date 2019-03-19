output: main.o menu.o ExtDoor.o Food.o Game.o LockDoor.o Pack.o Player.o Space.o Vial.o
	g++ -std=c++11 main.o menu.o ExtDoor.o Food.o Game.o LockDoor.o Pack.o Player.o Space.o Vial.o -o start

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -c menu.cpp

ExtDoor.o: ExtDoor.cpp ExtDoor.hpp
	g++ -std=c++11 -c ExtDoor.cpp
	
Food.o: Food.cpp Food.hpp
	g++ -std=c++11 -c Food.cpp

Game.o: Game.cpp Game.hpp
	g++ -std=c++11 -c Game.cpp

LockDoor.o: LockDoor.cpp LockDoor.hpp
	g++ -std=c++11 -c LockDoor.cpp

Pack.o: Pack.cpp Pack.hpp
	g++ -std=c++11 -c Pack.cpp

Player.o: Player.cpp Player.hpp
	g++ -std=c++11 -c Player.cpp

Space.o: Space.cpp Space.hpp
	g++ -std=c++11 -c Space.cpp

Vial.o: Vial.cpp Vial.hpp
	g++ -std=c++11 -c Vial.cpp

clean:
	rm *.o start
