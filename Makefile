# The mole digs using a compiler, not paws.
CC      := gcc
CFLAGS  := -Wall -Wextra -std=c99 -O2

.PHONY: all clean

# Where the mole keeps its tunnels (source files)
MOLE_SOURCE := src/main.c

# Where the mole emerges
MOLE_BIN := mole

# Default tunnel to dig
all: $(MOLE_BIN)

$(MOLE_BIN): $(MOLE_SOURCE)
	$(CC) $(CFLAGS) -o $@ $<

# Mole cleanup: collapse any abandoned tunnels
clean:
	rm -f $(MOLE_BIN)
