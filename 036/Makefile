OBJS = main.cpp
CC = g++
DEBUG_FLAGS = -O0 -g 
RELEASE_FLAGS = -O3
FLAGS = -std=c++14

release: $(OBJS)
	$(CC) $(RELEASE_FLAGS) $(FLAGS) $(OBJS) -o release

debug: $(OBJS)
	$(CC) $(DEBUG_FLAGS) $(FLAGS) $(OBJS) -o debug

