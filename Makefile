CC = g++
CFLAGS = -Wall -std=c++17
OBJ = src/main.o src/Missile.o src/TargetingSystem.o src/GuidanceSystem.o

all: missile_system

missile_system: $(OBJ)
	$(CC) $(CFLAGS) -o missile_system $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) missile_system
