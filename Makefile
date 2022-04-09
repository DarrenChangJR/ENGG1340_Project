FLAGS = -pedantic-errors -std=c++11

# printer.o: printer.cpp printer.h
# 	g++ $(FLAGS) -c $<

# bandit.o: bandit.cpp bandit.h
# 	g++ $(FLAGS) -c  $<

character.o: character.cpp character.h
	g++ $(FLAGS) -c $<

main.o: main.cpp character.h
	g++ $(FLAGS) -c $<

main: main.o character.o
	g++ $(FLAGS) $^ -o  $@

clean:
	rm -f *.o

.PHONY: clean
