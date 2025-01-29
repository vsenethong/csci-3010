CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

all: test_functions

test_functions: functions_to_implement.o test.o
	$(CXX) $(CXXFLAGS) functions_to_implement.o test.o -o test_functions

functions_to_implement.o: functions_to_implement.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

test.o: test.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c test.cpp

clean:
	rm -f *.o test_functions
