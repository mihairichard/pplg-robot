CXX=g++
CXXFLAGS=-I. -std=c++11 -Wall
SRCS=main.cpp robot.cpp grid.cpp reader.cpp
DEPS=grid.h robot.h reader.h utils.h
RM=rm -f

joc: $(SRCS) $(DEPS) 
	$(CXX) -o joc $(SRCS) $(CXXFLAGS)

clean:
	$(RM) joc
