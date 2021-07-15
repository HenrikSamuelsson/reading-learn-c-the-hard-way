# The compiler.
CC = gcc

# Compiler flags:
# -Wall 	turns on extensive list of warnings
# -g  		add debugging inforamtion to the executable
CFLAGS = -Wall -g

# Name of the build target executable.
TARGET = exercise-007

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	rm -f exercise-003
