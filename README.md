# Mysterious Mole

![A mysterious mole](assets/mysterious-mole.webp)

This is a very mysterious mole. Find out what's going on!

## Setup

Make sure to clone this repository onto the SEASnet servers/a Linux machine!

- `ssh`, then `git clone` once connected
- Note that you will probably not need to use VS Code for this exercise.

## Problem

Currently, this program is extremely obfuscated. That is, it's hard to read. In
an ideal world, the mole is less mysterious and just wrote something like this:

```c
#include <stdio.h>

int main(void)
{
    printf("Mole says hello!");
}
```

However, the mole is a bit more mysterious. Try to deobfuscate the code and
make sense of what the mole is doing.

- Hint 1: Mysterious moles like to dig tunnels in weird ways.
- Hint 2: It might be helpful to set a watchpoint in gdb. Which variables are
  good candidates for being watched?
