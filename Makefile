FLAGS = -pedantic-errors -std=c++11

printer.o: printer.cpp printer.h
	g++ $(FLAGS) -c $<

bandit.o: bandit.cpp bandit.h
	g++ $(FLAGS) -c  $<

character.o: character.cpp character.h
	g++ $(FLAGS) -c $<


main.o: main.cpp character.h printer.h bandit.h
	g++ $(FLAGS) -c $<

main: main.o character.o printer.o bandit.o 
	g++ $(FLAGS) $^ -o  $@

clean:
	rm -rf *.o

.PHONY: clean
