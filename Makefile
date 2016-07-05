CXX=g++
CXXFLAGS=-I. -std=c++11
SRCS=main.cpp robot.cpp grid.cpp
DEPS=grid.h robot.h

joc: $(SRCS) $(DEPS) 
	$(CXX) -o joc $(SRCS) $(CXXFLAGS)
