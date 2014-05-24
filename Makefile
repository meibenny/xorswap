COMPILER = g++
FLAGS = -g -Wall -std=c++0x
EXECUTABLE = xorswap

all: xorswap.o
	$(COMPILER) $(FLAGS) xorswap.o -o $(EXECUTABLE)

xorswap.o: xorswap.cpp
	$(COMPILER) $(FLAGS) -c xorswap.cpp

clean:
	rm -f $(EXECUTABLE) $(OBJFILES)
