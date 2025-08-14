CC = gcc
CFLAGS = -Wall -O2

# Source files
SRCS = sequential.c

# Header files (for dependencies)
HEADERS = car.h semaphore.h intersection.h

# Output executable
TARGET = transito

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET) *.o
