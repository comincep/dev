GXX = gcc
TARGET = app
SRC = ./src/main/main.c $(wildcard ./src/*.c)
FLAGS = -lm

all:
	$(GXX) $(SRC) -o $(TARGET) $(FLAGS)

clean:
	rm $(TARGET)

rundel: all
	xterm -e ./$(TARGET)
	rm $(TARGET)
