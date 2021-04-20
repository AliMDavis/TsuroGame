CCFLAGS= g++
CXXFLAGS= -Wall

all: 
	@echo "Command Options with Make"
	@echo "1.) all: is ouputting these lines of test"
	@echo "2.) build: builds the main source code"
	@echo "3.) test: to run with unit testing in mind"
	@echo "4.) clean: removes all .o and .gch files so far"

build:
	$(CC) $(CXX) $@ main.cc tsuroGame.cc

test: 
	$(CC) $(CXX) $@ testCases.cc tsuroGame.cc

clean: 
	rm -f *.o
	rm -f *.gch