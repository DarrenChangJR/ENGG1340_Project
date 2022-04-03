FLAGS = -pedantic-errors -std=c++11

printer.o: printer.cpp printer.h
	g++ $(FLAGS) -c $<

bandit.o: bandit.cpp bandit.h
	g++ $(FLAGS) -c  $<

fake_main.o: fake_main.cpp bandit.h printer.h
	g++ $(FLAGS) -c  $<

fake_main: fake_main.o bandit.o printer.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -rf *.o fake_main

.PHONY: clean
