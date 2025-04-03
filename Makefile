CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lreadline 
SRC = src/main.c src/shell.c src/parser.c src/executor.c src/commands.c
OBJ = $(SRC:.c=.o)
TARGET = kls

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)  # Add LDFLAGS here

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJ)
