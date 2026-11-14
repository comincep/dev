GXX = gcc
TARGET = app
SRC = ./src/main/main.c $(wildcard ./src/*.c)

all:
	$(GXX) $(SRC) -o $(TARGET)

clean:
	rm $(TARGET)

rundel: all
	xterm ./$(TARGET)
	rm $(TARGET)
