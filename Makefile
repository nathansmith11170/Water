OBJS = water.c

#DEPS = MatrixGraph.h prototypes.h LTexture.h

CC = gcc

COMPILER_FLAGS = -w -g -pedantic -std=c99 $(shell sdl2-config --cflags)

LINKER_FLAGS = $(shell sdl2-config --libs)

OBJ_NAME = water

clean:
	rm -f $(OBJ_NAME) *.o

all: $(OBJS) $(DEPS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) -o $(OBJ_NAME) $(LINKER_FLAGS)