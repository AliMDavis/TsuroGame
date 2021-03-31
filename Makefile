CCFLAGS= g++
CXXFLAGS= -Wall

all: 
	@echo "Command Options with Make"
	@echo "1.) all: is ouputting these lines of test"
	@echo "2.) build: builds the main source code"
	@echo "3.) clean: removes all .o and .gch files so far"

build:
	$(CC) $(CXX) $@ *.h *.cc 

clean: 
	rm -f *.o
	rm -f *.gch