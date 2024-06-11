CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = bank_system
SRCS = main.c bank.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)
