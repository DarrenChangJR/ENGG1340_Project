FLAGS = -pedantic-errors -std=c++11

bandit.o: bandit.cpp bandit.h
	g++ $(FLAGS) -c  $<

fake_main.o: fake_main.cpp bandit.h
	g++ $(FLAGS) -c  $<

fake_main: fake_main.o bandit.o
	g++ $(FLAGS) $^ -o $@