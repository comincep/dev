GXX = clang
SRC = ./src/main/main.c $(wildcard ./src/*.c)
TARGET = app
FLAGS = -masm=intel

all:
	$(GXX) $(SRC) -o $(TARGET) $(FLAGS)

clean:
	rm $(TARGET)

rundel: all
	./$(TARGET)
	rm $(TARGET)
